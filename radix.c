/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:43:03 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/24 11:47:42 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

s_list	*indices(s_list **s)
{
	int i;
	int nofindices;
	s_list	*tmp;
	s_list	*tmp2;
	
	nofindices = listsize(s);
	tmp = *s;
	tmp2 = copylist(s);
	while (tmp)
	{
		if (tmp->content == minimum (s))
			tmp->content = 0;
		else if (tmp->content == maximum (s))
			tmp->content = nofindices - 1;
		else
		{
			i = 0;
			while (tmp2)
			{
				if (tmp2->content < tmp->content)
					i++;
				tmp2 = tmp2->next;
			}
			tmp->content = i;
		}
        tmp = tmp->next;
	}
	listclear(&tmp2);
    return (tmp);
}

static s_list	*copylist(s_list **s)
{
	s_list	*copy;
	s_list	*tmp;
	s_list	*nnode;

	if (!*s)
		return (NULL);
	copy = NULL;
	tmp = *s;
	while (tmp)
	{
		nnode = cnode(tmp->content);
		if (!nnode)
		{
			listclear(&copy);
			return (NULL);
		}
		anode(&copy, nnode);
		tmp = tmp->next;
	}
	return (copy);
}
