/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:04:50 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:26:08 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"
#include "../libft/libft.h"

void	ft_lstswp(t_stack **stack)
{
	t_stack	*temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->next;
		(*stack)->next = temp->next;
		temp->next = *stack;
		*stack = temp;
	}
}
