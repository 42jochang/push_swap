/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quarter_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 07:09:11 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:14:17 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	stack_contains(t_stack *s, int lmax)
{
	while (s)
	{
		if (s->num <= lmax)
			return (1);
		s = s->next;
	}
	return (0);
}

static int	fix_b(t_batch *batch)
{
	int		c;
	int		max;
	t_stack	*tmp;

	tmp = (*batch).b;
	max = ft_lstmax((*batch).b);
	c = 0;
	while (tmp)
	{
		BREAK_CHECK(tmp->num == max);
		c++;
		tmp = tmp->next;
	}
	return (loop_n('b', batch, c, (*batch).flags));
}

int			prep_b(t_batch *batch)
{
	t_stack *tmp;
	int		c;

	c = 0;
	tmp = (*batch).b;
	if (((*batch).a)->num < ft_lstmin((*batch).b) ||
			((*batch).a)->num > ft_lstmax((*batch).b))
		return (fix_b(batch));
	while (tmp)
	{
		c++;
		if (tmp->next && (((*batch).a)->num < tmp->num &&
					((*batch).a)->num > tmp->next->num))
			break ;
		tmp = tmp->next;
	}
	return (loop_n('b', batch, c, (*batch).flags));
}

int			quarter_sort(t_batch *batch, int lmax)
{
	int		ap;

	ap = 0;
	while ((((*batch).a) && stack_contains((*batch).a, lmax)))
	{
		if (((*batch).a)->num <= lmax)
		{
			ap += prep_b(batch);
			ap += action("pb", &(*batch).a, &(*batch).b, (*batch).flags);
		}
		else
			ap += action("ra", &(*batch).a, &(*batch).b, (*batch).flags);
	}
	ap += fix_b(batch);
	return (ap);
}
