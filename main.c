/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:53:05 by hbelle            #+#    #+#             */
/*   Updated: 2024/01/02 16:25:32 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

void	init_variables(t_swap *s, int argc, char **argv)
{
	s->ac = argc;
	s->av = argv;
	s->count_a = 0;
	s->a = NULL;
	s->b = NULL;
	s->print = 0;
	s->i = 0;
	s->split_use = 0;
}

void	check_ac(t_swap *s)
{
	if (s->ac == 2)
	{
		s->av = ft_split(s->av[1], ' ');
		s->split_use = 1;
		if (check_input(s, s->av) == 1)
			free_end(s);
		s->i = 0;
	}
	else
	{
		s->i = 1;
		if (check_input(s, s->av) == 1)
			free_end(s);
		s->i = 1;
	}
	create_array_a_b(s);
	s->count_a = ft_count(s->a);
	if (s->count_a == 2 && s->a[0] > s->a[1])
		rule_sa(s);
	else if (s->count_a == 3)
		sorts_3(s);
	else if (s->count_a > 3)
		sorts(s);
	free_end(s);
}

int	main(int argc, char **argv)
{
	t_swap	s;

	init_variables(&s, argc, argv);
	if (s.ac > 1)
		check_ac(&s);
	return (0);
}
