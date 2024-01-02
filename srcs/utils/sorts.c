/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:43:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 13:42:26 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	check_cost(t_swap *s)
{
	while (s->b[s->i] != 2147483648)
	{
		s->current_cost = sorts_cost(s);
		if (s->current_cost < s->old_cost && s->current_cost != 0)
		{
			s->old_cost = s->current_cost;
			s->target_cost = s->b[s->i];
			s->target_cost_i = s->i;
			if (s->old_cost == 1)
				break ;
		}
		s->i++;
	}
}

void	chose_sort(t_swap *s)
{
	while (s->a[s->i] != 2147483648)
	{
		s->current_count_a = ft_count(s->a);
		s->current_count_b = ft_count(s->b);
		if (s->min > s->target_cost && s->a[s->i] == s->min)
			min_inf(s);
		else if ((s->a[s->i] < s->target_cost
				&& s->a[s->i + 1] > s->target_cost
				&& s->a[s->i + 1] != 2147483648)
			|| ((s->target_cost > s->a[s->i]
					&& s->target_cost < s->a[0])
				&& s->a[s->i + 1] == 2147483648))
			min_sup(s);
		else if (s->target_cost > s->max && s->a[s->i] == s->min)
			sup_max(s);
		if (s->break_count > 0)
			break ;
		s->i++;
	}
}

int	sorts(t_swap *s)
{
	if (check_if_sorted(s) == 1)
		return (1);
	init_sorts(s);
	while (s->b[0] != 2147483648)
	{
		s->i = 0;
		s->old_cost = 2147483647;
		check_cost(s);
		s->i = 0;
		chose_sort(s);
	}
	loop_sorts(s);
	return (0);
}
