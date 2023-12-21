/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:07 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/21 17:59:37 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	ft_check_input(t_swap *s, char *cur)
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