/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:53:41 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 22:52:55 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"
#include "../libft/libft.h"

void	ra(t_stack **a, char prog)
{
	if (prog == 'p')
		ft_putendl("ra");
	ft_lstrot(a);
}

void	rb(t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("rb");
	ft_lstrot(b);
}

void	rr(t_stack **a, t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("rr");
	ft_lstrot(a);
	ft_lstrot(b);
}
