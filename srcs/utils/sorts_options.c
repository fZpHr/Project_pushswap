/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:48:04 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:50:56 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	min_inf(t_swap *s)
{
	s->target_a = s->min;
	s->min = s->target_cost;
	s->target_i_a = s->i;
	process_case1(s);
	process_case2(s);
	process_case3(s);
	rule_pa(s);
	s->break_count++;
}

void	min_sup(t_swap *s)
{
	if (s->a[s->i + 1] != 2147483648)
		s->target_a = s->a[s->i + 1];
	else
		s->target_a = s->a[0];
	s->target_i_a = s->i;
	process_case1(s);
	process_case2(s);
	process_case3(s);
	rule_pa(s);
	s->break_count++;
}

void	sup_max(t_swap *s)
{
	s->max = s->target_cost;
	s->target_a = s->min;
	s->target_i_a = s->i;
	process_case1(s);
	process_case2(s);
	process_case3(s);
	rule_pa(s);
	s->break_count++;
}
