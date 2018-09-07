/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdis.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:59:50 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:08:13 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	fdis(char *cmd, t_stack **a, t_stack **b, char prog)
{
	if (ft_strequ(cmd, "sa"))
		sa(a, prog);
	else if (ft_strequ(cmd, "sb"))
		sb(b, prog);
	else if (ft_strequ(cmd, "ss"))
		ss(a, b, prog);
	else if (ft_strequ(cmd, "pa"))
		pa(a, b, prog);
	else if (ft_strequ(cmd, "pb"))
		pb(a, b, prog);
	else if (ft_strequ(cmd, "ra"))
		ra(a, prog);
	else if (ft_strequ(cmd, "rb"))
		rb(b, prog);
	else if (ft_strequ(cmd, "rr"))
		rr(a, b, prog);
	else if (ft_strequ(cmd, "rra"))
		rra(a, prog);
	else if (ft_strequ(cmd, "rrb"))
		rrb(b, prog);
	else if (ft_strequ(cmd, "rrr"))
		rrr(a, b, prog);
	else
		ft_exit();
}
