/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_cost.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:18:28 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 20:28:10 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

long int		*copy_array(t_swap *s, long int *x, long int *y)
{
	int i;

	i = 0;
	s->l = ft_count(y);
	x = (long int *)malloc(sizeof(long int) * (s->l + 1));
	while (i < s->l + 1)
	{
		x[i] = y[i];
		i++;
	}
	return (x);
}

int		sorts_cost(t_swap *s)
{
	int i;

	i = 0;
	s->min_cost = s->min;
	s->mid_cost = s->mid;
	s->max_cost = s->max;
	s->target = s->b[s->i];
	s->target_i = s->i;
	s->cost = 0;
	s->tmp_array_a = copy_array(s, s->tmp_array_a, s->a);
	s->tmp_array_b = copy_array(s, s->tmp_array_b, s->b);
	s->target_i_a = 0;
	while (s->tmp_array_a[i] != 2147483648)
	{
			if (s->tmp_array_a[i] > s->target)
			{
				s->target_a = s->tmp_array_a[i];
				s->target_i_a = i;
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 1 && s->target_i  <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rr_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrr_cost(s);
					}	
				}
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 1 )
				{
					while (s->tmp_array_a[0] != s->target_a)
					{
						s->cost++;
						rule_ra_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a)
					{
						s->cost++;;
						rule_rra_cost(s);
					}
				}
				if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rb_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrb_cost(s);
					}
				}
				s->cost++;
				rule_pa_cost(s);
				break;
			}
			else if (s->tmp_array_a[i] < s->target && s->tmp_array_a[i + 1] > s->target)
			{
				s->target_a = s->tmp_array_a[i + 1];
				s->target_i_a = i;
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 1 && s->target_i  <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rr_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrr_cost(s);
					}	
				}
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 1 )
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_ra_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rra_cost(s);
					}
				}
				if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rb_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrb_cost(s);
					}
				}
				s->cost++;
				rule_pa_cost(s);
				break;
			}
			else if (s->tmp_array_a[i] < s->target && s->tmp_array_a[i + 1] == 2147483648)
			{
				s->target_a = s->tmp_array_a[i];
				s->target_i_a = i;
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 2 && s->target_i  <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rr_cost(s);
					}
					s->cost++;
					rule_ra_cost(s);
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrr_cost(s);
					}
					s->cost++;
					rule_ra_cost(s);
				}
				if (s->target_i_a <= (ft_count(s->tmp_array_a) / 2) + 2)
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_ra_cost(s);
					}
					s->cost++;
					rule_ra_cost(s);
				}
				else
				{
					while (s->tmp_array_a[0] != s->target_a && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rra_cost(s);
					}
					s->cost++;
					rule_ra_cost(s);
				}
				if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rb_cost(s);
					}
				}
				else
				{
					while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
					{
						s->cost++;
						rule_rrb_cost(s);
					}
				}
				s->cost++;
				rule_pa_cost(s);
				break;
			}
			i++;
		}
	/*if (s->tmp_array_b[s->target_i] < s->min_cost && s->tmp_array_b[s->target_i] != 2147483648)
	{
		if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
		{
			while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rb_cost(s);
			}
		}
		else
		{
			while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rrb_cost_cost(s);
			}
		}
		s->cost++;
		rule_pa_cost(s);
		s->cost++;
		rule_ra_cost(s);
	}
	else if (s->tmp_array_b[s->target_i] < s->mid_cost && s->tmp_array_b[s->target_i] != 2147483648)
	{
		while (s->tmp_array_a[0] < s->tmp_array_b[s->target_i])
		{
			s->cost++;;
			rule_ra_cost(s);
		}
		if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
		{
			while (s->tmp_array_b[0] != s->target  && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rb_cost(s);
			}
		}
		else
		{
			while (s->tmp_array_b[0] != s->target  && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rrb_cost_cost(s);
			}
		}
		s->cost++;
		rule_pa_cost(s);
		s->cost++;
		rule_ra_cost(s);
	}
	else if (s->tmp_array_b[s->target_i] < s->max_cost && s->tmp_array_b[s->target_i] != 2147483648)
	{
		while (s->tmp_array_a[0] < s->tmp_array_b[s->target_i])
		{
			s->cost++;;
			rule_ra_cost(s);
		}
		if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
		{
			while (s->tmp_array_b[0] != s->target  && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rb_cost(s);
			}
		}
		else
		{
			while (s->tmp_array_b[0] != s->target  && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rrb_cost_cost(s);
			}
		}
		s->cost++;
		rule_pa_cost(s);
	}
	else if (s->tmp_array_b[s->target_i] > s->max_cost && s->tmp_array_b[s->target_i] != 2147483648)
	{
		while (s->tmp_array_a[0] != s->max_cost)
		{
			s->cost++;
			rule_rra_cost(s);
		}
		if (s->target_i <= (ft_count(s->tmp_array_b) / 2) + 1)
		{
			while (s->tmp_array_b[0] != s->target && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rb_cost(s);
			}
		}
		else
		{
			while (s->tmp_array_b[0] != s->target  && s->tmp_array_b[1] != 2147483648)
			{
				s->cost++;
				rule_rrb_cost_cost(s);
			}
		}
		s->max_cost = s->tmp_array_b[0];
		s->cost++;
		rule_pa_cost(s);
		s->cost++;
		rule_sa_cost(s);
	}*/
	free(s->tmp_array_a);
	free(s->tmp_array_b);
	return (s->cost);
}