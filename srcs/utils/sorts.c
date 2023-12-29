/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:43:18 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 20:22:45 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	sorts_3(t_swap *s)
{
	if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] < s->a[2])
	{
		ft_printf("sa\n");
		rule_sa(s);
	}
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
	{
		ft_printf("sa\n");
		rule_sa(s);
		ft_printf("rra\n");
		rule_rra(s);
	}
	else if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] > s->a[2])
	{
		ft_printf("ra\n");
		rule_ra(s);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] < s->a[2])
	{
		ft_printf("sa\n");
		rule_sa(s);
		ft_printf("ra\n");
		rule_ra(s);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
	{
		ft_printf("rra\n");
		rule_rra(s);
	}
}


int check_if_sorted(t_swap *s)
{
	s->i = 0;
	s->l = ft_count(s->a);
	while (s->i < s->l - 1)
	{
		if (s->a[s->i] > s->a[s->i + 1])
			return (0);
		s->i++;
	}
	return (1);
}

int	sorts(t_swap *s)
{
	if (check_if_sorted(s) == 1)
		return (1);
	s->l = ft_count(s->a);
	while(s->l != 3)
	{
		ft_printf("pb\n");
		rule_pb(s);
		s->l--;
	}
	sorts_3(s);
	s->min = s->a[0];
	s->mid = s->a[1];
	s->max = s->a[2];
	s->target = s->b[0];
	s->target_i = 0;
	s->target_cost = 0;
	s->target_cost_i = 0;
	while (s->b[0] != 2147483648)
	{
		s->i = 0;
		s->target = s->b[0];
		s->target_i = 0;
		s->old_cost = 2147483647;
		while (s->b[s->i] != 2147483648)
		{
			s->current_cost = sorts_cost(s);
			if (s->current_cost < s->old_cost && s->current_cost != 0)
			{
				s->old_cost = s->current_cost;
				s->target_cost = s->b[s->i];
				s->target_cost_i = s->i;
			}
			s->i++;
		}
		ft_printf("ok\n");
		s->i = 0;
		while (s->a[s->i] != 2147483648)
		{
			if (s->a[s->i] > s->target_cost)
			{
				s->target_a = s->a[s->i];
				s->target_i_a = s->i;
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 && s->target_cost_i  <= (ft_count(s->b) / 2) + 1)
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rr\n");
						rule_rr(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrr\n");
						rule_rr(s);
					}	
				}
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 )
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("ra\n");
						rule_ra(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("rra\n");
						rule_rra(s);
					}
				}
				if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rb\n");
						rule_rb(s);
					}
				}
				else
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrb\n");
						rule_rrb(s);
					}
				}
				ft_printf("pa\n");
				rule_pa(s);
				break;
			}
			else if (s->a[s->i] < s->target_cost && s->a[s->i + 1] > s->target_cost)
			{
				s->target_a = s->a[s->i + 1];
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 && s->target_cost_i  <= (ft_count(s->b) / 2) + 1)
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rr\n");
						rule_rr(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrr\n");
						rule_rr(s);
					}	
				}
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 )
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("ra\n");
						rule_ra(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("rra\n");
						rule_rra(s);
					}
				}
				if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rb\n");
						rule_rb(s);
					}
				}
				else
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrb\n");
						rule_rrb(s);
					}
				}
				ft_printf("pa\n");
				rule_pa(s);
				break;
			}
			else if (s->a[s->i] > s->target_cost)
			{
				s->target_a = s->a[s->i];
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 && s->target_cost_i  <= (ft_count(s->b) / 2) + 1)
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rr\n");
						rule_rr(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrr\n");
						rule_rr(s);
					}	
				}
				if (s->target_i_a <= (ft_count(s->a) / 2) + 1 )
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("ra\n");
						rule_ra(s);
					}
				}
				else
				{
					while (s->a[0] != s->target_a && s->b[1] != 2147483648)
					{
						ft_printf("rra\n");
						rule_rra(s);
					}
				}
				if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rb\n");
						rule_rb(s);
					}
				}
				else
				{
					while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
					{
						ft_printf("rrb\n");
						rule_rrb(s);
					}
				}
				ft_printf("pa\n");
				rule_pa(s);
				break;
			}
			s->i++;
		}
		/*if (s->b[s->target_cost_i] < s->min && s->b[s->target_cost_i] != 2147483648)
		{
			if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
			{
				while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
				{
					ft_printf("rb\n");
					rule_rb(s);
				}
			}
			else
			{
				while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
				{
					ft_printf("rrb\n");
					rule_rrb(s);
				}
			}
			ft_printf("pa\n");
			rule_pa(s);
			s->min = s->b[0];
		}
		else if (s->b[s->target_cost_i] < s->mid && s->b[s->target_cost_i] != 2147483648)
		{
			while (s->a[0] < s->b[s->target_cost_i])
			{
				ft_printf("ra\n");
				rule_ra(s);
			}
			if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
			{
				while (s->b[0] != s->target_cost  && s->b[1] != 2147483648)
				{
					ft_printf("rb\n");
					rule_rb(s);
				}
			}
			else
			{
				while (s->b[0] != s->target_cost  && s->b[1] != 2147483648)
				{
					ft_printf("rrb\n");
					rule_rrb(s);
				}
			}
			ft_printf("pa\n");
			rule_pa(s);
			
		}
		else if (s->b[s->target_cost_i] < s->max && s->b[s->target_cost_i] != 2147483648)
		{
			while (s->a[0] < s->b[s->target_cost_i])
			{
				ft_printf("ra\n");
				rule_ra(s);
			}
			if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
			{
				while (s->b[0] != s->target_cost  && s->b[1] != 2147483648)
				{
					ft_printf("rb\n");
					rule_rb(s);
				}
			}
			else
			{
				while (s->b[0] != s->target_cost  && s->b[1] != 2147483648)
				{
					ft_printf("rrb\n");
					rule_rrb(s);
				}
			}
			ft_printf("pa\n");
			rule_pa(s);
		}
		else if (s->b[s->target_cost_i] > s->max && s->b[s->target_cost_i] != 2147483648)
		{
			s->i = 0;
			while (s->a[0] != s->max)
			{
				ft_printf("rra\n");
				rule_rra(s);
			}
			if (s->target_cost_i <= (ft_count(s->b) / 2) + 1)
			{
				while (s->b[0] != s->target_cost && s->b[1] != 2147483648)
				{
					ft_printf("rb\n");
					rule_rb(s);
				}
			}
			else
			{
				while (s->b[0] != s->target_cost  && s->b[1] != 2147483648)
				{
					ft_printf("rrb\n");
					rule_rrb(s);
				}
			}
			s->max = s->b[0];
			ft_printf("pa\n");
			rule_pa(s);
			ft_printf("sa\n");
			rule_sa(s);
		}*/
	}
	/*s->i = 0;
	s->target_cost = s->a[0];
	while (s->a[s->i] != 2147483648)
	{
		if (s->a[s->i] < s->target_cost)
		{
			s->target_cost = s->a[s->i];
			s->target_cost_i = s->i;
		}
		s->i++;
	}
	while (s->target_cost_i != 0)
	{
		if (s->target_cost_i <= (ft_count(s->a) / 2) + 1)
		{
			ft_printf("ra\n");
			rule_ra(s);
			s->target_cost_i--;
		}
		else
		{
			ft_printf("rra\n");
			rule_rra(s);
			if (s->target_cost_i == ft_count(s->a) - 1)
				s->target_cost_i = 0;
			else
				s->target_cost_i++;
		}
	}*/
	return (0);
}
