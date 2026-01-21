/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:00:28 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/29 15:16:55 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	s(t_list **s)
{
	long	tmp;

	if (!s || !*s)
		return ;
	tmp = (*s)->content;
	(*s)->content = (*s)->next->content;
	(*s)->next->content = tmp;
}

void	sa(t_list **s1)
{
	s(s1);
	write(1, "sa\n", 3);
}

void	sb(t_list **s1)
{
	s(s1);
	write(1, "sb\n", 3);
}

void	ss(t_list **s1, t_list **s2)
{
	s(s1);
	s(s2);
	write(1, "ss\n", 3);
}
