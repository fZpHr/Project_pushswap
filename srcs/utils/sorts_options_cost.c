/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_options_cost.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:46:08 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:50:53 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	min_inf_cost(t_swap *s)
{
	s->target_a = s->min;
	s->min_cost = s->target;
	s->target_i_a = s->j;
	process_case1_cost(s);
	process_case2_cost(s);
	process_case3_cost(s);
	rule_pa_cost(s);
	s->cost++;
	s->break_count++;
}

void	min_sup_cost(t_swap *s)
{
	if (s->tmp_array_a[s->j + 1] != 2147483648)
		s->target_a = s->tmp_array_a[s->j + 1];
	else
		s->target_a = s->tmp_array_a[0];
	s->target_i_a = s->j;
	process_case1_cost(s);
	process_case2_cost(s);
	process_case3_cost(s);
	rule_pa_cost(s);
	s->cost++;
	s->break_count++;
}

void	sup_max_cost(t_swap *s)
{
	s->max_cost = s->target;
	s->target_a = s->min_cost;
	s->target_i_a = s->j;
	process_case1_cost(s);
	process_case2_cost(s);
	process_case3_cost(s);
	rule_pa_cost(s);
	s->cost++;
	s->break_count++;
}
