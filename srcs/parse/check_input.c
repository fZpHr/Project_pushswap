/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:07 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/22 18:54:36 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int	ft_check_is_alpha(t_swap *s, char *cur)
{
	while (*cur)
	{
		if (*cur < '0' || *cur > '9')
			s->check_error++;
		cur++;
	}
	if (s->check_error > 0)
		return (1);
	return (0);
}

int	check_input(t_swap *s, char **input)
{
	s->i = 1;
	s->check_error = 0;
	while (input[s->i])
	{
		s->check_error = ft_check_is_alpha(s, input[s->i]);
		if (s->check_error == 1)
		{
			ft_printf("Error\n");
			return (1);
		}
		s->i++;
	}
	return (0);
}