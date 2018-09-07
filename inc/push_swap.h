/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:58:42 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:01:43 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>

# include "util.h"
# include "../libft/libft.h"

typedef struct		s_flags
{
	uint8_t			t:1;
	uint8_t			v:1;
	uint8_t			s:1;
	uint8_t			a:1;
	uint8_t			c:1;
}					t_flags;

typedef struct		s_batch
{
	t_stack			*a;
	t_stack			*b;
	t_flags			flags;
}					t_batch;

t_stack				*parse_args(int ac, char **av);
t_stack				*parse_stdin();
void				dupe_check(t_stack *s, int n);
void				fdis(char *cmd, t_stack **a, t_stack **b, char prog);
t_flags				get_flags(int ac, char **av);
int					sorting_hat(t_batch *batch);
int					action(char *cmd, t_stack **a, t_stack **b, t_flags flags);
int					loop_n(char stack, t_batch *batch, int c, t_flags flags);
int					quarter_sort(t_batch *batch, int lmax);
int					back_to_a(t_stack **a, t_stack **b, t_flags flags);
int					mini_sort(t_batch *batch);
int					medium_sort(t_batch *batch);
int					prep_b(t_batch *batch);

#endif
