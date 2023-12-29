/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_add_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:40:54 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 18:22:15 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int	ft_count(long int *a)
{
	int	i;

	i = 0;
	while (a[i] != 2147483648)
		i++;
	return (i);
}

long int	*ft_add(t_swap *s, long int *x)
{
	int i;

	i = 0;
	s->l = ft_count(x);
	s->tmp_array = x;
	x = (long int *)malloc(sizeof(long int) * (s->l + 2));
	while (i < s->l + 1)
	{
		x[i + 1] = s->tmp_array[i];
		i++;
	}
	free(s->tmp_array);
	return (x);
}

long int	*ft_clear_add(t_swap *s, long int *x)
{
	int i;
	
	i = 0;
	s->l = ft_count(x);
	s->tmp_array = x;
	x = (long int *)malloc(sizeof(long int) * (s->l));
	while (i < s->l)
	{
		x[i] = s->tmp_array[i + 1];
		i++;
	}
	free(s->tmp_array);
	return (x);
}