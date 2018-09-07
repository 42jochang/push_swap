/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:53:06 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 22:51:48 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"
#include "../libft/libft.h"

void	sa(t_stack **a, char prog)
{
	if (prog == 'p')
		ft_putendl("sa");
	ft_lstswp(a);
}

void	sb(t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("sb");
	ft_lstswp(b);
}

void	ss(t_stack **a, t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("ss");
	ft_lstswp(a);
	ft_lstswp(b);
}

void	pa(t_stack **a, t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("pa");
	ft_lstpush(a, b);
}

void	pb(t_stack **a, t_stack **b, char prog)
{
	if (prog == 'p')
		ft_putendl("pb");
	ft_lstpush(b, a);
}
