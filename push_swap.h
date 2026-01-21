/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:18:17 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/30 16:17:02 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
}					t_list;
int					digit(char *s);
int					repeated(t_list **s);
int					issorted(t_list *s);
int					minimum(t_list **s);
long				ft_atol(const char *nptr);
void				sa(t_list **s1);
void				sb(t_list **s1);
void				ss(t_list **s1, t_list **s2);
void				pa(t_list **s1, t_list **s2);
void				pb(t_list **s1, t_list **s2);
void				ra(t_list **s);
void				rb(t_list **s);
void				rr(t_list **s1, t_list **s2);
void				rra(t_list **s);
void				rrb(t_list **s);
void				rrr(t_list **s1, t_list **s2);
t_list				*cnode(long x);
void				anode(t_list **s, t_list *cn);
void				listclear(t_list **s);
int					listsize(t_list **s);
void				two(t_list **s);
void				three(t_list **s);
void				four(t_list **s, t_list **b);
void				five(t_list **s, t_list **b);
t_list				**indices(t_list **s);
void				indicestobinary(t_list **s);
#endif
