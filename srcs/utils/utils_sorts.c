/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:25:47 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:51:15 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	sorts_3(t_swap *s)
{
	s->current_count_a = ft_count(s->a);
	s->current_count_b = ft_count(s->b);
	if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] < s->a[2])
		rule_sa(s);
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
	{
		rule_sa(s);
		rule_rra(s);
	}
	else if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] > s->a[2])
		rule_ra(s);
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] < s->a[2])
	{
		rule_sa(s);
		rule_ra(s);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
		rule_rra(s);
}

void	check_min(t_swap *s)
{
	while (s->a[s->i] != 2147483648)
	{
		if (s->a[s->i] < s->target_cost)
		{
			s->target_cost = s->a[s->i];
			s->target_cost_i = s->i;
		}
		s->i++;
	}
}

void	loop_sorts(t_swap *s)
{
	s->current_count_a = ft_count(s->a);
	s->current_count_b = ft_count(s->b);
	s->i = 0;
	s->target_cost = s->a[0];
	check_min(s);
	while (s->target_cost_i != 0)
	{
		if (s->target_cost_i <= (s->current_count_a / 2) + 1)
		{
			rule_ra(s);
			s->target_cost_i--;
		}
		else
		{
			rule_rra(s);
			if (s->target_cost_i == s->current_count_a - 1)
				s->target_cost_i = 0;
			else
				s->target_cost_i++;
		}
	}
}

int	check_if_sorted(t_swap *s)
{
	s->i = 0;
	s->l = ft_count(s->a);
	while (s->i < s->l - 1)
	{
		if (s->a[s->i] > s->a[s->i + 1])
			return (0);
		s->i++;
	}
	return (1);
}

void	init_sorts(t_swap *s)
{
	s->l = ft_count(s->a);
	while (s->l != 3)
	{
		rule_pb(s);
		s->l--;
	}
	sorts_3(s);
	s->min = s->a[0];
	s->mid = s->a[1];
	s->max = s->a[2];
	s->target = s->b[0];
	s->target_i = 0;
	s->target_cost = 0;
	s->target_cost_i = 0;
}
