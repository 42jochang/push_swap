/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 04:46:58 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:08:55 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static t_flags	init_flags(void)
{
	t_flags	flags;

	flags.t = 0;
	flags.v = 0;
	flags.s = 0;
	flags.a = 0;
	flags.c = 0;
	return (flags);
}

static t_flags	set_flags(char c, t_flags flags)
{
	flags.t = (c == 't' ? 1 : flags.t);
	flags.v = (c == 'v' ? 1 : flags.v);
	flags.s = (c == 's' ? 1 : flags.s);
	flags.a = (c == 'a' ? 1 : flags.a);
	flags.c = (c == 'c' ? 1 : flags.c);
	return (flags);
}

t_flags			get_flags(int ac, char **av)
{
	t_flags	flags;
	int		opt;

	flags = init_flags();
	g_optind = 1;
	while ((opt = ft_getopt(ac, av, "acstv")) != -1)
	{
		if (opt == '?')
		{
			write(2, "\033[31mError: \033[0mInvalid Flag\n", 29);
			exit(1);
		}
		flags = set_flags(opt, flags);
	}
	return (flags);
}
