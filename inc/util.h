/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:03:49 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:03:53 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stack
{
	int32_t			num;
	struct s_stack	*next;
}					t_stack;
/*
** cmd
*/
void				sa(t_stack **a, char prog);
void				sb(t_stack **b, char prog);
void				ss(t_stack **a, t_stack **b, char prog);
void				pa(t_stack **a, t_stack **b, char prog);
void				pb(t_stack **a, t_stack **b, char prog);
void				ra(t_stack **a, char prog);
void				rb(t_stack **b, char prog);
void				rr(t_stack **a, t_stack **b, char prog);
void				rra(t_stack **a, char prog);
void				rrb(t_stack **b, char prog);
void				rrr(t_stack **a, t_stack **b, char prog);
/*
** util
*/
void				ft_lstpush(t_stack **a, t_stack **b);
void				ft_lstrevrot(t_stack **s);
void				ft_lstrot(t_stack **s);
void				ft_lstswp(t_stack **s);
void				ft_lstend(t_stack **a, int num);
void				ft_lstfree(t_stack **s);
int					ft_lstsize(t_stack *a);
int					ft_lstmax(t_stack *s);
int					ft_lstmin(t_stack *s);
int					ft_lstsorted(t_stack *s);
void				ft_exit(void);
void				ft_lstprint(t_stack *a);

#endif
