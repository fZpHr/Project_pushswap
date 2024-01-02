/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sorts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:49:37 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:51:25 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	process_case1(t_swap *s)
{
	if (s->target_i_a <= (s->current_count_a / 2) + 1
		&& s->target_cost_i <= (s->current_count_b / 2) + 1)
	{
		while (s->a[0] != s->target_a
			&& s->b[0] != s->target_cost && s->b[1] != 2147483648
			&& s->b[0] != 2147483648)
			rule_rr(s);
	}
	else
	{
		while (s->a[0] != s->target_a
			&& s->b[0] != s->target_cost && s->b[1] != 2147483648
			&& s->b[0] != 2147483648)
			rule_rrr(s);
	}
}

void	process_case2(t_swap *s)
{
	if (s->target_i_a <= (s->current_count_a / 2) + 1)
	{
		while (s->a[0] != s->target_a)
			rule_ra(s);
	}
	else
	{
		while (s->a[0] != s->target_a)
			rule_rra(s);
	}
}

void	process_case3(t_swap *s)
{
	if (s->target_cost_i <= (s->current_count_b / 2) + 1)
	{
		while (s->b[0] != s->target_cost && s->b[1] != 2147483648
			&& s->b[0] != 2147483648)
			rule_rb(s);
	}
	else
	{
		while (s->b[0] != s->target_cost && s->b[1] != 2147483648
			&& s->b[0] != 2147483648)
			rule_rrb(s);
	}
}
