/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:40:19 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/29 17:06:58 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*cnode(long x)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	s->content = x;
	s->next = NULL;
	return (s);
}

void	anode(t_list **s, t_list *cn)
{
	t_list	*tmp;

	if (!cn)
		return ;
	if (!*s || !s)
	{
		*s = cn;
		return ;
	}
	tmp = *s;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = cn;
}

void	listclear(t_list **s)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!s || !*s)
		return ;
	tmp = *s;
	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	(*s) = NULL;
}

int	listsize(t_list **s)
{
	t_list	*tmp;
	int		i;

	if (!s)
		return (0);
	i = 0;
	tmp = *s;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
