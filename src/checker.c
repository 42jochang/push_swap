/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 18:44:17 by jochang           #+#    #+#             */
/*   Updated: 2018/09/08 13:01:52 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	commands(t_stack **a, t_stack **b)
{
	char	*cmd;

	while (get_next_line(0, &cmd) > 0)
	{
		fdis(cmd, a, b, 'c');
		free(cmd);
	}
	if (cmd && *cmd)
		free(cmd);
}

static int	check(t_stack *a, t_stack *b)
{
	ZERO_CHECK(b);
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
	ft_putendl(check(a, b) ? "\033[32mOK\033[0m" : "\033[31mKO\033[0m");
	ft_lstfree(&a);
	ft_lstfree(&b);
	return (0);
}
