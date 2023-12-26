/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:53:05 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/26 15:01:15 by hbelle           ###   ########.fr       */
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
		if (check_input(&s, s.av) == 0)
		{
			create_array_a_b(&s);
			s.i = 0;
			rule_pb(&s);
			while (s.b[s.i])
			{
				ft_printf("b[%d]: %d\n", s.i, s.b[s.i]);
				s.i++;
			}
			s.i = 0;
			while (s.a[s.i])
			{
				ft_printf("a[%d]: %d\n", s.i, s.a[s.i]);
				s.i++;
			}
			free_end(&s);
			/*if (ft_check_double(&s, s.a) == 0)
			{
				if (ft_check_sort(&s, s.a) == 0)
				{
					ft_printf("OK\n");
					return (0);
				}
				else
					ft_printf("KO\n");
			}
			else
				ft_printf("KO\n");*/
		}
	}
	return (0);
}
