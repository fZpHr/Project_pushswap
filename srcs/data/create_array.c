/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:16:29 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 18:50:26 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/ft_push_swap.h"

void	create_array_a_b(t_swap *s)
{
	s->i = 1;
	s->j = 0;
	s->a = (int *) ft_calloc(sizeof(int), s->ac);
	s->b = (int *) ft_calloc(sizeof(int), s->ac);
	while (s->av[s->i])
	{
		s->a[s->j] = ft_atoi(s->av[s->i]);
		s->i++;
		s->j++;
	}
}
