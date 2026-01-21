/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:43:03 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/30 16:17:34 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	**copylist(t_list **s)
{
	t_list	**copy;
	t_list	*tmp;
	t_list	*nnode;

	if (!*s)
		return (NULL);
	copy = malloc(sizeof(t_list *));
	if (!copy)
		return (NULL);
	*copy = NULL;
	tmp = *s;
	while (tmp)
	{
		nnode = cnode(tmp->content);
		if (!nnode)
		{
			listclear(copy);
			return (NULL);
		}
		anode(copy, nnode);
		tmp = tmp->next;
	}
	return (copy);
}

t_list	**indices(t_list **s)
{
	int		i;
	t_list	*tmp;
	t_list	**s2;
	t_list	*tmp2;
	t_list	*tmp3;

	tmp = *s;
	s2 = copylist(s);
	if (!s2)
		return (NULL);
	tmp2 = *s2;
	while (tmp2)
	{
		i = 0;
		tmp3 = *s2;
		while (tmp3)
		{
			if (tmp3->content < tmp2->content)
				i++;
			tmp3 = tmp3->next;
		}
		tmp->content = i;
		tmp = tmp->next;
		tmp2 = tmp2->next;
	}
	listclear(s2);
	free(s2);
	return (s);
}

void	indicestobinary(t_list **s)
{
	int		i;
	int		j;
	int		max;
	int		size;
	t_list	**b;

	i = -1;
	max = 0;
	s = indices(s);
	size = listsize(s);
	if (size <= 1)
		return;
	b = malloc(sizeof(t_list *));
	if (!b)
		return ;
	*b = NULL;
	while (((size - 1) >> max))
		max++;
	while (++i < max)
	{
		j = -1;
		while (++j < size)
		{
			if ((((*s)->content >> i) & 1) == 0)
				pb(s, b);
			else
				ra(s);
		}
		while (*b)
			pa(s, b);
	}
	listclear(b);
	free(b);
}
