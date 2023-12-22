/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:40:34 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 14:40:43 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_ra(t_swap *s, int *a, int *b)
{
	s->i = 0;
	s->tmp = a[0];
	while (s->i < ft_count(a))
	{
		if (s->i + 1 != ft_count(a))
			a[s->i] = a[s->i + 1];
		s->i++;
	}
	a[ft_count(a)] = s->tmp;
}

void	rule_rb(t_swap *s, int *a, int *b)
{
	s->i = 0;
	s->tmp = b[0];
	while (s->i < ft_count(b))
	{
		if (s->i + 1 != ft_count(b))
			b[s->i] = b[s->i + 1];
		s->i++;
	}
	b[ft_count(b)] = s->tmp;
}

void	rule_rr(t_swap *s, int *a, int *b)
{
	rule_rb(s, &a, &b);
	rule_ra(s, &a, &b);
}