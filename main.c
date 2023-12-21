/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:53:05 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/21 18:04:39 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"


/*int	ft_push_swap(int *a, int *b)
{
	int	i;
	int	tmp;
	int	*tmpp;
	int	i;
	int	i;
	int	error;
	int	error;
	int	error;
	int	error;
	int	error;

	tmp = 0;
	i = 0;
	if ("sa")
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	else if ("sb")
	{
		tmp = b[0];
		b[0] = b[1];
		b[1] = tmp;
	}
	else if ("ss")
	{
		sa &&sb;
	}
	else if ("pa")
	{
		if (ft_check(b) != NULL)
		{
			tmpp = a;
			a = malloc(sizeof(int *)* (ft_count_digit(a) + 1);
			a = add_one(a, tmpp); // fonction pour transferer tmpp to a
			a = ft_swap(a, b);	// fonction pour transferer le 1 de b to a
		}
	}
	else if ("pb")
	{
		if (ft_check(a) != NULL)
		{
			tmpp = b;
			b = malloc(sizeof(int *)*(ft_count_digit(b) + 1);
			b = add_one(b, tmpp);
			b = ft_swap(b, a);
		}
	}
	else if ("ra")
	{
		num = count;
		tmp = a[0];
		while (!num)
		{
			if ((num - 1) != 0)
				a[num - 1] = a[num];
			numm--;
		}
		a[count] = tmp;
	}
	else if ("rb")
	{
		i = 0;
		num = count;
		tmp = b[count];
		while (!num)
		{
			if ((num - 1) != 0)
				b[num] = b[num - 1];
			num--;
		}
		b[0] = tmp;
	}
	else if ("")
}*/

void	init_variables(t_swap *s)
{
	s->check_error = 0;
}


int	main(int ac, char **av)
{
	t_swap	s;

	init_variables(&s);
	if (ac > 1)
	{
		s.i = 1;
		while (av[s.i])
		{
			s.check_error = ft_check_input(&s, av[s.i]);
			if (s.check_error == 1)
			{
				return (ft_printf("Error\n"));
			}
			s.i++;
		}
	}
	return (0);
}
