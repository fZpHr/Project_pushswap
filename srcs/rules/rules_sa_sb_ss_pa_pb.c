/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_sa_sb_ss_pa_pb.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:00:18 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 18:30:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_sa(t_swap *s, int *a, int *b)
{
	s->tmp = a[0];
	a[0] = a[1];
	a[1] = s->tmp;
}

void	rule_sb(t_swap *s, int *a, int *b)
{
	s->tmp = b[0];
	b[0] = b[1];
	b[1] = s->tmp;
}

void	rule_ss(t_swap *s, int *a, int *b)
{
	rule_sb(s, &a, &b);
	rule_sa(s, &a, &b);
}

void	rule_pa(t_swap *s, int *a, int *b)
{
	if (*b != NULL)
	{
		a = ft_add(s, a);
		a[0] = b[0];
	}
}

void	rule_pb(t_swap *s, int *a, int *b)
{
	if (*a != NULL)
	{
		b = ft_add(s, b);
		b[0] = a[0];
	}
}

