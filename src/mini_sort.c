/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:55:42 by jochang           #+#    #+#             */
/*   Updated: 2018/09/07 16:08:58 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int		is_sorted(t_stack *s)
{
	t_stack	*head;
	int		cut;

	cut = 0;
	head = s;
	while (s && s->next)
	{
		if (s->next->num < s->num)
			cut++;
		s = s->next;
	}
	if (head->num < s->num)
		cut++;
	return (cut > 1 ? 0 : 1);
}

int				mini_sort(t_batch *batch)
{
	int	ap;

	ap = 0;
	if (!is_sorted((*batch).a))
		ap += action("sa", &(*batch).a, &(*batch).b, (*batch).flags);
	if (((*batch).a)->num != ft_lstmin((*batch).a))
	{
		if (((*batch).a)->next->num == ft_lstmin((*batch).a))
			ap += action("ra", &(*batch).a, &(*batch).b, (*batch).flags);
		else
			ap += action("rra", &(*batch).a, &(*batch).b, (*batch).flags);
	}
	return (ap);
}
