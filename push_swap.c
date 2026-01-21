/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:16:50 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/30 16:17:07 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	finalsort(t_list **s)
{
	t_list	*b;

	b = NULL;
	if (issorted(*s))
	{
		listclear(s);
		return ;
	}
	if (listsize(s) <= 5)
	{
		if (listsize(s) == 2)
			two(s);
		if (listsize(s) == 3)
			three(s);
		if (listsize(s) == 4)
			four(s, &b);
		if (listsize(s) == 5)
			five(s, &b);
	}
	else
		indicestobinary(s);
	listclear(s);
}

int	main(int argc, char **argv)
{
	t_list	*s;
	t_list	*node;
	int		args;

	s = NULL;
	args = 0;
	if (argc <= 1)
		return (0);
	while (++args < argc)
	{
		node = (cnode(ft_atol(argv[args])));
		anode(&s, node);
	}
	args = 0;
	while (++args < argc)
	{
		if (!repeated(&s) || (ft_atol(argv[args]) > 2147483647)
			|| !digit(argv[args]) || (ft_atol(argv[args]) < -2147483648))
		{
			listclear(&s);
			return (write(2, "Error\n", 6));
		}
	}
	finalsort(&s);
	return (0);
}
