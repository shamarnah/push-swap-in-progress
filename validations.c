/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:15:25 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/30 15:22:37 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i] == ' ')
		i++;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int	repeated(t_list **s)
{
	int		i;
	t_list	*tmp;
	t_list	*tmp2;

	if (!*s)
		return (0);
	i = 0;
	tmp = *s;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->content == tmp2->content)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

int	issorted(t_list *s)
{
	if (!s || !s->next)
		return (1);
	while (s->next)
	{
		if (s->next->content < s->content)
			return (0);
		s = s->next;
	}
	return (1);
}

int	minimum(t_list **s)
{
	long	min;
	t_list	*tmp;

	tmp = *s;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}
