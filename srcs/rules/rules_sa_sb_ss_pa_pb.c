/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_sa_sb_ss_pa_pb.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:00:18 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/26 15:03:17 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_sa(t_swap *s)
{
	s->tmp = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = s->tmp;
}

void	rule_sb(t_swap *s)
{
	s->tmp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = s->tmp;
}

void	rule_ss(t_swap *s)
{
	rule_sb(s);
	rule_sa(s);
}

void	rule_pa(t_swap *s)
{
	if (s->b != NULL)
	{
		s->a = ft_add(s, s->a);
		s->a[0] = s->b[0];
		s->a = ft_clear_add(s, s->b);
	}
}

void	rule_pb(t_swap *s)
{
	if (s->a != NULL)
	{
		s->b = ft_add(s, s->b);
		s->b[0] = s->a[0];
		s->a = ft_clear_add(s, s->a);
	}
}

