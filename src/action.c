/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 07:49:25 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:06:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void		print_size(t_stack *s)
{
	ft_putchar('(');
	ft_putnbr(ft_lstsize(s));
	ft_putchar(')');
}

static void		print_status(char *cmd, t_stack **a, t_stack **b, t_flags flags)
{
	system("clear");
	ft_putstr("Command: ");
	ft_putendl(cmd);
	if (flags.c)
		ft_putstr("\033[32m");
	ft_putstr("Stack A ");
	if (flags.a)
		print_size(*a);
	ft_putstr(": \033[0m");
	ft_lstprint(*a);
	ft_putchar('\n');
	if (flags.c)
		ft_putstr("\033[33m");
	ft_putstr("Stack B ");
	if (flags.a)
		print_size(*b);
	ft_putstr(": \033[0m");
	ft_lstprint(*b);
	ft_putstr("\n");
	sleep(flags.s ? 1 : 0);
}

int				action(char *cmd, t_stack **a, t_stack **b, t_flags flags)
{
	fdis(cmd, a, b, (flags.v ? ' ' : 'p'));
	if (flags.v)
		print_status(cmd, a, b, flags);
	return (1);
}
