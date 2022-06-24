/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:08:13 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 06:55:48 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->array[++stack_a->top] = stack_b->array[stack_b->top];
	stack_b->top--;
	ft_putstr("pa\n");
}

void	ra(t_stack *stack_a)
{
	int	tmp;
	int	i;

	tmp = stack_a->array[stack_a->top];
	i = stack_a->top;
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		i--;
	}
	stack_a->array[0] = tmp;
	ft_putstr("ra\n");
}

void	rb(t_stack *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b->array[stack_b->top];
	i = stack_b->top;
	while (i > 0)
	{
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_b->array[0] = tmp;
	ft_putstr("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->array[stack_a->top];
	i = stack_a->top;
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		i--;
	}
	stack_a->array[0] = tmp;
	tmp = stack_b->array[stack_b->top];
	i = stack_b->top;
	while (i > 0)
	{
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_b->array[0] = tmp;
	ft_putstr("rr\n");
}
