/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:40:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/26 15:01:01 by hbelle           ###   ########.fr       */
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

int	*ft_add(t_swap *s, int *x)
{
	s->i = 0;
	s->tmp_array = x;
	if (x != NULL)
		free(x);
	x = (int *)malloc(sizeof(int) * (ft_count(s->tmp_array) + 1));
	while (s->tmp_array[s->i])
	{
		x[s->i + 1] = s->tmp_array[s->i];
		s->i++;
	}
	return (x);
}

int	*ft_clear_add(t_swap *s, int *x)
{
	s->i = 0;
	s->tmp_array = x;
	if (x != NULL)
		free(x);
	x = (int *)malloc(sizeof(int) * (ft_count(s->tmp_array) - 1));
	while (s->tmp_array[s->i])
	{
		x[s->i] = s->tmp_array[s->i + 1];
		s->i++;
	}
	return (x);
}