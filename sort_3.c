/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:38:44 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:35:00 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack_a)
{
	if (stack_a->array[0] > stack_a->array[stack_a->top]
		&& stack_a->array[stack_a->top - 1] < stack_a->array[stack_a->top])
		sa(stack_a);
	else if (stack_a->array[stack_a->top] > stack_a->array[0]
		&& stack_a->array[stack_a->top - 1] > stack_a->array [0]
		&& stack_a->array[stack_a->top - 1] < stack_a->array[stack_a->top])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (stack_a->array[stack_a->top] > stack_a->array[0]
		&& stack_a->array[stack_a->top] > stack_a->array[stack_a->top - 1])
		ra(stack_a);
	else if (stack_a->array[stack_a->top] < stack_a->array[0]
		&& stack_a->array[0] < stack_a->array[stack_a->top - 1])
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (stack_a->array[0] < stack_a->array[stack_a->top - 1]
		&& stack_a->array[stack_a->top] > stack_a->array[0])
		rra(stack_a);
}
