/* ************************************************************************** */
/*                                                                            */
/*                                                        ;      ;   */
/*   ft_push_swap.h                                     ;+;      ;+;    ;+;   */
/*                                                    +;+ +;+         +;+     */
/*   By; hbelle <hbelle@student.42.fr>              +#+  +;+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created; 2023/12/21 14;20;45 by hbelle            #+#    #+#             */
/*   Updated; 2023/12/26 14;44;34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft.h"

typedef struct s_swap
{
	int			i;
	int			l;
	int			j;
	int			cost;
	int			median;
	int			target;
	int			target_i;
	int			target_i_a;
	long int			target_a;
	int			current_cost;
	int			min;
	int			min_cost;
	int			mid;
	int			mid_cost;
	int			max;
	int			max_cost;
	int			old_cost;
	int			target_cost;
	int			target_cost_i;
	int			check_error;
	int			tmp;
	long int	*tmp_array;
	long int			*a;
	long int			*tmp_array_a;
	long int			*b;
	long int			*tmp_array_b;
	int			ac;
	char		**av;

}		t_swap;



void	rule_sa(t_swap *s);
void	rule_sb(t_swap *s);
void	rule_ss(t_swap *s);
void	rule_pa(t_swap *s);
void	rule_pb(t_swap *s);
void	rule_ra(t_swap *s);
void	rule_rb(t_swap *s);
void	rule_rr(t_swap *s);
void	rule_rra(t_swap *s);
void	rule_rrb(t_swap *s);
void	rule_rrr(t_swap *s);
void	rule_sa_cost(t_swap *s);
void	rule_sb_cost(t_swap *s);
void	rule_ss_cost(t_swap *s);
void	rule_pa_cost(t_swap *s);
void	rule_pb_cost(t_swap *s);
void	rule_ra_cost(t_swap *s);
void	rule_rb_cost(t_swap *s);
void	rule_rr_cost(t_swap *s);
void	rule_rra_cost(t_swap *s);
void	rule_rrb_cost(t_swap *s);
void	rule_rrr_cost(t_swap *s);
long int		*ft_add(t_swap *s, long int *x);
int		check_input(t_swap *s, char **input);
int		ft_count(long int *a);
void	create_array_a_b(t_swap *s);
int		free_end(t_swap *s);
long int		*ft_clear_add(t_swap *s, long int *x);
void	sorts_3(t_swap *s);
int		sorts(t_swap *s);
int		sorts_cost(t_swap *s);

#endif
