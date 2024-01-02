/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_sa_sb_ss_pa_pb_cost.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:00:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:46:47 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_push_swap.h"

void	rule_sa_cost(t_swap *s)
{
	s->tmp = s->tmp_array_a[0];
	s->tmp_array_a[0] = s->tmp_array_a[1];
	s->tmp_array_a[1] = s->tmp;
}

void	rule_sb_cost(t_swap *s)
{
	s->tmp = s->tmp_array_b[0];
	s->tmp_array_b[0] = s->tmp_array_b[1];
	s->tmp_array_b[1] = s->tmp;
}

void	rule_ss_cost(t_swap *s)
{
	rule_sb(s);
	rule_sa(s);
}

void	rule_pa_cost(t_swap *s)
{
	if (s->tmp_array_b[0] != 2147483648)
	{
		s->tmp_array_a = ft_add(s, s->tmp_array_a);
		s->tmp_array_a[0] = s->tmp_array_b[0];
		s->tmp_array_b = ft_clear_add(s, s->tmp_array_b);
	}
}

void	rule_pb_cost(t_swap *s)
{
	if (s->tmp_array_a[0] != 2147483648)
	{
		s->tmp_array_b = ft_add(s, s->tmp_array_b);
		s->tmp_array_b[0] = s->tmp_array_a[0];
		s->tmp_array_a = ft_clear_add(s, s->tmp_array_a);
	}
}
