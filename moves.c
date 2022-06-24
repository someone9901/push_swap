/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:49:13 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 06:55:57 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	tmp;

	tmp = stack_a->array[stack_a->top - 1];
	stack_a->array[stack_a->top - 1] = stack_a->array[stack_a->top];
	stack_a->array[stack_a->top] = tmp;
	ft_putstr("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	tmp;

	tmp = stack_b->array[stack_b->top - 1];
	stack_b->array[stack_b->top - 1] = stack_b->array[stack_b->top];
	stack_b->array[stack_b->top] = tmp;
	ft_putstr("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;

	tmp = stack_a->array[stack_a->top - 1];
	stack_a->array[stack_a->top - 1] = stack_a->array[stack_a->top];
	stack_a->array[stack_a->top] = tmp;
	tmp = stack_b->array[stack_b->top - 1];
	stack_b->array[stack_b->top - 1] = stack_b->array[stack_b->top];
	stack_b->array[stack_b->top] = tmp;
	ft_putstr("ss\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	stack_b->array[++stack_b->top] = stack_a->array[stack_a->top];
	stack_a->top--;
	ft_putstr("pb\n");
}

int	is_afull(t_stack *stack_a)
{
	return (stack_a->top == stack_a->len -1);
}
