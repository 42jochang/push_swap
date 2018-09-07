/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_hat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 05:51:50 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:15:42 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		sorting_hat(t_batch *batch)
{
	int		ap;
	int		chunk;
	int		temp;
	int		i;

	ap = 0;
	chunk = 0;
	temp = 0;
	i = 0;
	if (ft_lstsize((*batch).a) <= 3)
		ap += mini_sort(batch);
	else if (ft_lstsize((*batch).a) <= 40)
		ap += medium_sort(batch);
	else
		temp = (ft_lstsize((*batch).a) <= 200 ? 5 : 11);
	if (temp)
	{
		chunk = (ft_lstmax((*batch).a) - ft_lstmin((*batch).a)) / temp;
		while (++i < temp)
			ap += quarter_sort(batch, chunk * i);
		ap += quarter_sort(batch, ft_lstmax((*batch).a) + 1);
		ap += back_to_a(&(*batch).a, &(*batch).b, (*batch).flags);
	}
	return (ap);
}
