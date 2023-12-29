/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:16:29 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 16:42:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/ft_push_swap.h"

void	create_array_a_b(t_swap *s)
{
	s->j = 0;
	s->a = (long int *) ft_calloc(sizeof(long int), s->ac);
	s->b = (long int *) ft_calloc(sizeof(long int), s->ac);
	while (s->av[s->i])
	{
		s->a[s->j] = ft_atoi(s->av[s->i]);
		s->b[s->j] = 2147483648;
		s->i++;
		s->j++;
	}
	s->a[s->j] = 2147483648;
	s->b[s->j] = 2147483648;
}
