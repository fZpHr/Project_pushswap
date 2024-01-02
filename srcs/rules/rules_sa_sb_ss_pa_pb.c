/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_sa_sb_ss_pa_pb.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:00:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 14:46:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_sa(t_swap *s)
{
	s->tmp = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = s->tmp;
	if (s->print == 0)
		ft_printf("sa\n");
}

void	rule_sb(t_swap *s)
{
	s->tmp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = s->tmp;
	if (s->print == 0)
		ft_printf("sb\n");
}

void	rule_ss(t_swap *s)
{
	s->print = 1;
	rule_sb(s);
	rule_sa(s);
	s->print = 0;
	ft_printf("ss\n");
}

void	rule_pa(t_swap *s)
{
	if (s->b[0] != 2147483648)
	{
		s->a = ft_add(s, s->a);
		s->a[0] = s->b[0];
		s->b = ft_clear_add(s, s->b);
	}
	if (s->print == 0)
		ft_printf("pa\n");
}

void	rule_pb(t_swap *s)
{
	if (s->a[0] != 2147483648)
	{
		s->b = ft_add(s, s->b);
		s->b[0] = s->a[0];
		s->a = ft_clear_add(s, s->a);
	}
	if (s->print == 0)
		ft_printf("pb\n");
}
