/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:07 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 15:50:32 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int	ft_check_is_alpha(t_swap *s, char *cur)
{
	int	i;

	i = 0;
	if (cur[i] == '-')
		i++;
	while (cur[i])
	{
		if (cur[i] < '0' || cur[i] > '9')
			s->check_error++;
		i++;
	}
	if (s->check_error > 0)
		return (1);
	return (0);
}

int	ft_check_duplicate(t_swap *s, char *cur)
{
	int	i;

	i = 0;
	while (s->av[i])
	{
		if (s->av[i][0] == 45)
			if (s->av[i][1] == 48)
				s->check_error++;
		if (ft_strcmp(cur, s->av[i]) == 0)
			s->check_error++;
		i++;
	}
	if (s->check_error > 1)
		return (1);
	return (0);
}

int	check_input(t_swap *s, char **input)
{
	s->check_error = 0;
	while (input[s->i])
	{
		s->check_error = ft_check_is_alpha(s, input[s->i]);
		s->check_error = ft_check_duplicate(s, input[s->i]);
		if (s->check_error == 1 || ft_atoi(input[s->i]) > 2147483647
			|| ft_atoi(input[s->i]) < -2147483648)
		{
			ft_printf("Error\n");
			return (1);
		}
		s->i++;
	}
	return (0);
}
