/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sorts_cost.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:16:13 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:51:33 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	process_case1_cost(t_swap *s)
{
	if (s->target_i_a <= (s->current_count_a / 2) + 1
		&& s->target_i <= (s->current_count_b / 2) + 1)
	{
		while (s->tmp_array_a[0] != s->target_a
			&& s->tmp_array_b[0] != s->target
			&& s->tmp_array_b[1] != 2147483648)
		{
			rule_rr_cost(s);
			s->cost++;
		}
	}
	else
	{
		while (s->tmp_array_a[0] != s->target_a
			&& s->tmp_array_b[0] != s->target
			&& s->tmp_array_b[1] != 2147483648)
		{
			rule_rrr_cost(s);
			s->cost++;
		}
	}
}

void	process_case2_cost(t_swap *s)
{
	if (s->target_i_a <= (s->current_count_a / 2) + 1)
	{
		while (s->tmp_array_a[0] != s->target_a)
		{
			rule_ra_cost(s);
			s->cost++;
		}
	}
	else
	{
		while (s->tmp_array_a[0] != s->target_a)
		{
			rule_rra_cost(s);
			s->cost++;
		}
	}
}

void	process_case3_cost(t_swap *s)
{
	if (s->target_i <= (s->current_count_b / 2) + 1)
	{
		while (s->tmp_array_b[0] != s->target
			&& s->tmp_array_b[1] != 2147483648)
		{
			rule_rb_cost(s);
			s->cost++;
		}
	}
	else
	{
		while (s->tmp_array_b[0] != s->target
			&& s->tmp_array_b[1] != 2147483648)
		{
			rule_rrb_cost(s);
			s->cost++;
		}
	}
}
