/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 01:38:31 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/25 00:19:55 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include  <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct stack {
	int	top;
	int	*array;
	int	len;
}	t_stack;

void	check_d(char *str);
int		check_max(long j);
int		ft_isdigit(int a);
long	ft_atoi(char *str);
void	error(char *str);
void	push(t_stack *stack_a, int item);
void	push_item(int len, t_stack *stack_a, char **av);
int		duplicate(int ac, char **str);
t_stack	*createstack_a(unsigned int len, t_stack *stack_a);
t_stack	*createstack_b(unsigned int len, t_stack *stack_b);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	sort_3(t_stack *stack_a);
int		mini(t_stack *stack_a);
void	min_to_top(t_stack *stack_a);
void	sort_4(t_stack *stack_a, t_stack *stack_b);
void	sort_5(t_stack *stack_a, t_stack *stack_b);
void	min_to_top2(t_stack *stack_a);
void	sort_2(t_stack *stack_a);
void	sort_rx(t_stack *stack_a);
void	change_idx(t_stack *stack_a, int *tmp);
int		is_bempty(t_stack *stack_b);
int		is_bfull(t_stack *stack_b);
int		is_afull(t_stack *stack_a);
int		is_aempty(t_stack *stack_a);
void	sort(t_stack *stack_a, t_stack *stack_b, int num_bit);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
int		check_sorted(char **av, int len);
void	small_sort(t_stack *stack_a, t_stack *stack_b, int ac);

#endif