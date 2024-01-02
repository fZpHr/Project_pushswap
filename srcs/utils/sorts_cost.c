/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_cost.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:18:28 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:50:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

long int	*copy_array(t_swap *s, long int *x, long int *y)
{
	int	i;

	i = 0;
	s->l = ft_count(y);
	x = (long int *)malloc(sizeof(long int) * (s->l + 1));
	while (i < s->l + 1)
	{
		x[i] = y[i];
		i++;
	}
	return (x);
}

void	init_cost(t_swap *s)
{
	s->j = 0;
	s->min_cost = s->min;
	s->mid_cost = s->mid;
	s->max_cost = s->max;
	s->target = s->b[s->i];
	s->target_i = s->i;
	s->cost = 0;
	s->tmp_array_a = copy_array(s, s->tmp_array_a, s->a);
	s->tmp_array_b = copy_array(s, s->tmp_array_b, s->b);
	s->target_i_a = 0;
	s->break_count = 0;
}

int	sorts_cost(t_swap *s)
{
	init_cost(s);
	while (s->tmp_array_a[s->j] != 2147483648)
	{
		s->current_count_a = ft_count(s->tmp_array_a);
		s->current_count_b = ft_count(s->tmp_array_b);
		if (s->tmp_array_a[s->j] > s->target)
			min_inf_cost(s);
		else if ((s->tmp_array_a[s->j] < s->target && s->tmp_array_a[s->j + 1]
				> s->target && s->tmp_array_a[s->j + 1] != 2147483648)
			|| ((s->target > s->tmp_array_a[s->j] && s->target < s->a[0])
				&& s->tmp_array_a[s->j + 1] == 2147483648))
			min_sup_cost(s);
		else if (s->target > s->max_cost
			&& s->tmp_array_a[s->j] == s->min_cost)
			sup_max_cost(s);
		if (s->break_count > 0)
			break ;
		s->j++;
	}
	s->break_count = 0;
	free(s->tmp_array_a);
	free(s->tmp_array_b);
	return (s->cost);
}
