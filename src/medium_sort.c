/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:11:11 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:10:26 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	fix_a(t_batch *batch)
{
	int		c;
	int		min;
	t_stack	*tmp;

	tmp = (*batch).a;
	min = ft_lstmin((*batch).a);
	c = 0;
	while (tmp)
	{
		BREAK_CHECK(tmp->num == min);
		c++;
		tmp = tmp->next;
	}
	return (loop_n('a', batch, c, (*batch).flags));
}

static int	prep_a(t_batch *batch)
{
	t_stack	*tmp;
	int		c;

	c = 0;
	tmp = (*batch).a;
	if (((*batch).b)->num < ft_lstmin(tmp) ||
			(((*batch).b)->num) > ft_lstmax(tmp))
		return (fix_a(batch));
	while (tmp)
	{
		c++;
		if (tmp->next && ((*batch).b)->num > tmp->num &&
				(((*batch).b)->num) < tmp->next->num)
			break ;
		tmp = tmp->next;
	}
	return (loop_n('a', batch, c, (*batch).flags));
}

int			medium_sort(t_batch *batch)
{
	int	ap;

	ap = 0;
	while (!ft_lstsorted((*batch).a) && ft_lstsize((*batch).a) > 3)
	{
		ap += prep_b(batch);
		ap += action("pb", &(*batch).a, &(*batch).b, (*batch).flags);
	}
	ap += mini_sort(batch);
	while ((*batch).b)
	{
		ap += prep_a(batch);
		ap += action("pa", &(*batch).a, &(*batch).b, (*batch).flags);
	}
	ap += fix_a(batch);
	return (ap);
}
