/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ru.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:37:18 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/29 15:16:55 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r(t_list **s)
{
	t_list	*n;

	if (!s || !*s || !(*s)->next)
		return ;
	n = *s;
	while (n->next)
		n = n->next;
	n->next = *s;
	*s = (*s)->next;
	n = n->next;
	n->next = NULL;
}

void	ra(t_list **s)
{
	r(s);
	write(1, "ra\n", 3);
}

void	rb(t_list **s)
{
	r(s);
	write(1, "rb\n", 3);
}

void	rr(t_list **s1, t_list **s2)
{
	r(s1);
	r(s2);
	write(1, "rr\n", 3);
}
