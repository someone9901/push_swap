/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:08:27 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:03:11 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stack_a->array[0];
	while (i <= stack_a->top)
	{
		stack_a->array[i - 1] = stack_a->array[i];
		i++;
	}
	stack_a->array[stack_a->top] = tmp;
	ft_putstr("rra\n");
}

void	rrb(t_stack *stack_b)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stack_b->array[0];
	while (i <= stack_b->top)
	{
		stack_b->array[i - 1] = stack_b->array[i];
		i++;
	}
	stack_b->array[stack_b->top] = tmp;
	ft_putstr("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stack_a->array[0];
	while (i <= stack_a->top)
	{
		stack_a->array[i - 1] = stack_a->array[i];
		i++;
	}
	stack_a->array[stack_a->top] = tmp;
	tmp = stack_b->array[0];
	while (i <= stack_b->top)
	{
		stack_b->array[i - 1] = stack_b->array[i];
		i++;
	}
	stack_b->array[stack_b->top] = tmp;
	ft_putstr("rrr\n");
}

int	is_bempty(t_stack *stack_b)
{
	return (stack_b->top == -1);
}

int	is_bfull(t_stack *stack_b)
{
	return (stack_b->top == stack_b->len -1);
}
