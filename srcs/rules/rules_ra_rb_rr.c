/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:40:34 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:46:30 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_ra(t_swap *s)
{
	s->i = 0;
	s->tmp = s->a[0];
	while (s->i < s->current_count_a - 1)
	{
		if (s->i + 1 != s->current_count_a)
			s->a[s->i] = s->a[s->i + 1];
		s->i++;
	}
	s->a[s->current_count_a - 1] = s->tmp;
	if (s->print == 0)
		ft_printf("ra\n");
}

void	rule_rb(t_swap *s)
{
	s->i = 0;
	s->tmp = s->b[0];
	while (s->i < s->current_count_b - 1)
	{
		if (s->i + 1 != s->current_count_b)
			s->b[s->i] = s->b[s->i + 1];
		s->i++;
	}
	s->b[s->current_count_b - 1] = s->tmp;
	if (s->print == 0)
		ft_printf("rb\n");
}

void	rule_rr(t_swap *s)
{
	s->print = 1;
	rule_rb(s);
	rule_ra(s);
	s->print = 0;
	ft_printf("rr\n");
}
