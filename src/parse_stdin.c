/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 02:06:09 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:12:21 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_atoistd(const char *str)
{
	int		i;
	int64_t n;
	int		s;

	i = 0;
	n = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
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
	if (!ft_isspace(str[i]) && (IS_PRINT(str[i]) || n != (n & 0xFFFFFFFF)))
		ft_exit();
	return ((int32_t)n * s);
}

t_stack		*parse_stdin(void)
{
	t_stack	*a;
	int		i;
	int		n;
	char	*s;
	char	*tmp;

	i = 0;
	a = NULL;
	s = ft_getstdin();
	tmp = s;
	ft_putendl(s);
	while (*s)
	{
		n = ft_atoistd(s);
		dupe_check(a, n);
		ft_lstend(&a, n);
		s += ft_placevalue(n);
		if (ft_isspace(*s))
			s++;
	}
	free(tmp);
	return (a);
}
