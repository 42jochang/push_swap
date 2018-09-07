/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:56:13 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 22:56:18 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"
#include "../libft/libft.h"

void	rra(t_stack **a, char prog)
{
	if (prog == 'p')
		ft_putendl("rra");
	ft_lstrevrot(a);
}

void	rrb(t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("rrb");
	ft_lstrevrot(b);
}

void	rrr(t_stack **a, t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("rrr");
	ft_lstrevrot(a);
	ft_lstrevrot(b);
}
