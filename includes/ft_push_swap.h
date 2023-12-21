/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:20:45 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/21 18:16:01 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft.h"

typedef struct s_swap
{
	int	i;
	int	check_error;

}		t_swap;

int	ft_check_input(t_swap *s, char *cur);

#endif
