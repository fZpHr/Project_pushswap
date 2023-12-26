/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:40:34 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/26 14:43:24 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_ra(t_swap *s)
{
	s->i = 0;
	s->tmp = s->a[0];
	while (s->i < ft_count(s->a))
	{
		if (s->i + 1 != ft_count(s->a))
			s->a[s->i] = s->a[s->i + 1];
		s->i++;
	}
	s->a[ft_count(s->a)] = s->tmp;
}

void	rule_rb(t_swap *s)
{
	s->i = 0;
	s->tmp = s->b[0];
	while (s->i < ft_count(s->b))
	{
		if (s->i + 1 != ft_count(s->b))
			s->b[s->i] = s->b[s->i + 1];
		s->i++;
	}
	s->b[ft_count(s->b)] = s->tmp;
}

void	rule_rr(t_swap *s)
{
	rule_rb(s);
	rule_ra(s);
}