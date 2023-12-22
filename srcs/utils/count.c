/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:40:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 18:25:54 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int	ft_count(int *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	*ft_add(t_swap *s, int *a)
{
	s->i = 1;
	s->j = 0;
	s->tmp = a;
	a = (int *)malloc(sizeof(int) * (ft_count(a) + 1));
	while (s->tmp_array[s->i])
	{
		a[s->i] = s->tmp_array[s->j];
		s->i++;
		s->j++;
	}
	return (a);
}