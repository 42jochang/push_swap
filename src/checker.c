/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 18:44:17 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:07:27 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	commands(t_stack **a, t_stack **b)
{
	char	*cmd;

	cmd = malloc(1);
	while (get_next_line(0, &cmd) > 0)
	{
		BREAK_CHECK(ft_strequ(cmd, ""));
		fdis(cmd, a, b, 'c');
		free(cmd);
	}
}

static int	check(t_stack *a)
{
	while (a && a->next)
	{
		ZERO_CHECK(a->num > a->next->num);
		a = a->next;
	}
	return (1);
}

int			main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	ZERO_CHECK(ac == 1);
	g_optind = 1;
	a = parse_args(ac, av);
	b = NULL;
	commands(&a, &b);
	ft_putendl(check(a) ? "\033[32mOK\033[0m" : "\033[31mKO\033[0m");
	ft_lstfree(&a);
	ft_lstfree(&b);
	return (0);
}
