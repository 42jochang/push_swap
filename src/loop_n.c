/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:50:02 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:09:29 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	rot_loop(char stack, t_batch *batch, int c, t_flags flags)
{
	int		i;
	int		ap;

	i = -1;
	ap = 0;
	if (stack == 'a')
		while (++i < c)
			ap += action("ra", &(*batch).a, &(*batch).b, flags);
	else if (stack == 'b')
		while (++i < c)
			ap += action("rb", &(*batch).a, &(*batch).b, flags);
	return (ap);
}

static int	revrot_loop(char stack, t_batch *batch, int c, t_flags flags)
{
	int		i;
	int		ap;

	i = -1;
	ap = 0;
	if (stack == 'a')
		while (++i < c)
			ap += action("rra", &(*batch).a, &(*batch).b, flags);
	else if (stack == 'b')
		while (++i < c)
			ap += action("rrb", &(*batch).a, &(*batch).b, flags);
	return (ap);
}

int			loop_n(char stack, t_batch *batch, int c, t_flags flags)
{
	int		n;
	int		ap;

	ap = 0;
	n = ft_lstsize(stack == 'a' ? (*batch).a : (*batch).b);
	if (c <= n / 2)
		ap = rot_loop(stack, batch, c, flags);
	else
		ap = revrot_loop(stack, batch, n - c, flags);
	return (ap);
}
