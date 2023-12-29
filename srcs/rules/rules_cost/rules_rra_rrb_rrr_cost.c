/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rra_rrb_rrr_cost.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:39:53 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 18:23:53 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_push_swap.h"

void	rule_rra_cost(t_swap *s)
{
	int i;

	i = ft_count(s->tmp_array_a) - 1;
	s->tmp = s->tmp_array_a[i];
	while (i > 0)
	{
		s->tmp_array_a[i] = s->tmp_array_a[i - 1];
		i--;
	}
	s->tmp_array_a[0] = s->tmp;
}

void	rule_rrb_cost(t_swap *s)
{
	int i;
	
	i = ft_count(s->tmp_array_b) - 1;
	s->tmp = s->tmp_array_b[i];
	while (i > 0)
	{
		s->tmp_array_b[i] = s->tmp_array_b[i - 1];
		i--;
	}
	s->tmp_array_b[0] = s->tmp;
}

void	rule_rrr_cost(t_swap *s)
{
	rule_rrb_cost(s);
	rule_rra_cost(s);
}