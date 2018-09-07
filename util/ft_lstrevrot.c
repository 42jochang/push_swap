/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrevrot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 21:42:08 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:23:10 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"
#include "../libft/libft.h"

void	ft_lstrevrot(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*first;

	if (*stack && (*stack)->next)
	{
		temp = (*stack);
		while (*stack && (*stack)->next && (*stack)->next->next)
			(*stack) = (*stack)->next;
		first = (*stack)->next;
		(*stack)->next = NULL;
		first->next = temp;
		(*stack) = first;
	}
}
