/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:00:12 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:11:33 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_atoic(const char *str)
{
	int		i;
	int64_t n;
	int		s;

	i = 0;
	n = 0;
	s = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		IF_TRUE(str[i] == '-', s = -1);
		i++;
	}
	while (IS_DIGIT(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (IS_PRINT(str[i]) || n > INT_MAX || n < INT_MIN)
		ft_exit();
	return ((int32_t)n * s);
}

t_stack		*parse_args(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		n;

	i = g_optind - 1;
	a = NULL;
	while (++i < ac)
	{
		n = ft_atoic(av[i]);
		dupe_check(a, n);
		ft_lstend(&a, n);
	}
	return (a);
}
