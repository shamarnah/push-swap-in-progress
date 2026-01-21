/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:04:06 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/30 15:10:54 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	p(t_list **s1, t_list **s2)
{
	t_list	*n;

	if (!s1 || !*s1)
		return ;
	n = *s1;
	*s1 = (*s1)->next;
	n->next = *s2;
	*s2 = n;
}

void	pa(t_list **s1, t_list **s2)
{
	p(s2, s1);
	write(1, "pa\n", 3);
}

void	pb(t_list **s1, t_list **s2)
{
	p(s1, s2);
	write(1, "pb\n", 3);
}
