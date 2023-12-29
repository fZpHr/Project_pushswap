/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:53:05 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 18:42:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

void	init_variables(t_swap *s, int argc, char **argv)
{
	s->ac = argc;
	s->av = argv;
}

int	main(int argc, char **argv)
{
	t_swap	s;

	init_variables(&s, argc, argv);
	if (s.ac > 1)
	{
		if (s.ac == 2)
		{
			s.av = ft_split(s.av[1], ' ');
			if (check_input(&s, s.av) == 1)
				exit (0);
			s.i = 0;
		}
		else
		{
			if (check_input(&s, s.av) == 1)
				exit (0);
			s.i = 1;
		}
		create_array_a_b(&s);
		if (ft_count(s.a) == 2 && s.a[0] > s.a[1])
		{
			ft_printf("sa\n");
			rule_sa(&s);
		}
		else if (ft_count(s.a) == 3)
			sorts_3(&s);
		else if (ft_count(s.a) > 3)
			sorts(&s);
		s.i = 0;
		while (s.a[s.i] != 2147483648)
		{
			ft_printf("a[%d]: %d\n", s.i, s.a[s.i]);
			s.i++;
		}
	}
return (0);
}
