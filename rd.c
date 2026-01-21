/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:56:27 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/29 16:17:52 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrrr(t_list **s)
{
	t_list	*n;
	t_list	*tmp;

	if (!s || !*s || !(*s)->next)
		return ;
	n = *s;
	tmp = *s;
	while (n->next)
		n = n->next;
	while (tmp->next != n)
		tmp = tmp->next;
	n->next = *s;
	*s = n;
	tmp->next = NULL;
}

void	rra(t_list **s)
{
	rrrr(s);
	write(1, "rra\n", 4);
}

void	rrb(t_list **s)
{
	rrrr(s);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **s1, t_list **s2)
{
	rrrr(s1);
	rrrr(s2);
	write(1, "rrr\n", 4);
}
