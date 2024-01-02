/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:53:48 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 17:18:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int	free_end(t_swap *s)
{
	s->i = 0;
	if (s->a)
	{
		free(s->a);
		s->a = NULL;
	}
	if (s->b)
	{
		free(s->b);
		s->b = NULL;
	}
	if (s->av && s->split_use == 1)
	{
		while (s->av[s->i])
		{
			free(s->av[s->i]);
			s->i++;
		}
		free(s->av);
	}
	exit (0);
}
