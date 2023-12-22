/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rra_rrb_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:39:53 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 14:40:45 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_rra(t_swap *s, int *a, int *b)
{
	s->i = ft_count(a) - 1;
	s->tmp = a[s->i];
	while (s->i > 0)
	{
		a[s->i] = a[s->i - 1];
		s->i--;
	}
	a[0] = s->tmp;
}

void	rule_rrb(t_swap *s, int *a, int *b)
{
	s->i = ft_count(b) - 1;
	s->tmp = b[s->i];
	while (s->i > 0)
	{
		b[s->i] = b[s->i - 1];
		s->i--;
	}
	b[0] = s->tmp;
}

void	rule_rrr(t_swap *s, int *a, int *b)
{
	rule_rrb(s, &a, &b);
	rule_rra(s, &a, &b);
}