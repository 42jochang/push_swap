/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:29:52 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:24:29 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"

int		ft_lstsize(t_stack *a)
{
	int		n;

	n = 0;
	while (a)
	{
		a = a->next;
		n++;
	}
	return (n);
}
