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
	int		i;
	int		j;
	int		check_error;
	int		tmp;
	int		*tmp_array;
	int		*a;
	int		*b;
	int		ac;
	char	**av;

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
int		*ft_add(t_swap *s, int *x);
int		check_input(t_swap *s, char **input);
int		ft_count(int *a);
void	create_array_a_b(t_swap *s);
int		free_end(t_swap *s);
int		*ft_clear_add(t_swap *s, int *x);

#endif
