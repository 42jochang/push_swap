/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 04:22:05 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:12:59 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	print_total(int ap)
{
	ft_putstr("Total actions: ");
	ft_putnbr(ap);
	ft_putchar('\n');
}

int			main(int ac, char **av)
{
	int		ap;
	t_batch	batch;

	batch.flags = get_flags(ac, av);
	batch.a = (ac == g_optind ? parse_stdin() : parse_args(ac, av));
	ZERO_CHECK(!batch.a);
	batch.b = NULL;
	ap = sorting_hat(&batch);
	if (batch.flags.t)
		print_total(ap);
	ft_lstfree(&(batch.a));
	ft_lstfree(&(batch.b));
	return (0);
}
