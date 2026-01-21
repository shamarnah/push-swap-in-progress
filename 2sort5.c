/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2sort5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:42:26 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/29 16:52:38 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two(t_list **s)
{
	sa(s);
}

void	three(t_list **s)
{
	long	first;
	long	second;
	long	third;

	first = (*s)->content;
	second = (*s)->next->content;
	third = (*s)->next->next->content;
	if (first < second && first < third && third < second)
	{
		rra(s);
		sa(s);
	}
	else if (first > second && first < third && second < third)
		sa(s);
	else if (first < second && first > third && second > third)
		rra(s);
	else if (first > second && first > third && second < third)
		ra(s);
	else if (first > second && first > third && second > third)
	{
		ra(s);
		sa(s);
	}
}

void	four(t_list **s, t_list **b)
{
	long	min;
	t_list	*tmp;
	int		count;

	count = 0;
	min = minimum(s);
	tmp = *s;
	while (tmp->content != min)
	{
		count++;
		tmp = tmp->next;
	}
	if (count >= 2)
		while ((*s)->content != min)
			rra(s);
	else if (count != 0)
		while ((*s)->content != min)
			ra(s);
	pb(s, b);
	three(s);
	pa(s, b);
	listclear(b);
}

void	five(t_list **s, t_list **b)
{
	long	min;
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = *s;
	min = minimum(s);
	while (tmp->content != min)
	{
		count++;
		tmp = tmp->next;
	}
	if (count >= 3)
		while ((*s)->content != min)
			rra(s);
	else if (count != 0)
		while ((*s)->content != min)
			ra(s);
	pb(s, b);
	four(s, b);
	pa(s, b);
	listclear(b);
}
