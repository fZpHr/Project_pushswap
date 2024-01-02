/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ra_rb_rr_cost.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:40:34 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:50:06 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_push_swap.h"

void	rule_ra_cost(t_swap *s)
{
	int	i;

	i = 0;
	s->tmp = s->tmp_array_a[0];
	while (i < s->current_count_a - 1)
	{
		if (i + 1 != s->current_count_a)
			s->tmp_array_a[i] = s->tmp_array_a[i + 1];
		i++;
	}
	s->tmp_array_a[s->current_count_a - 1] = s->tmp;
}

void	rule_rb_cost(t_swap *s)
{
	int	i;

	i = 0;
	s->tmp = s->tmp_array_b[0];
	while (i < s->current_count_b - 1)
	{
		if (i + 1 != s->current_count_b)
			s->tmp_array_b[i] = s->tmp_array_b[i + 1];
		i++;
	}
	s->tmp_array_b[s->current_count_b - 1] = s->tmp;
}

void	rule_rr_cost(t_swap *s)
{
	rule_rb_cost(s);
	rule_ra_cost(s);
}
