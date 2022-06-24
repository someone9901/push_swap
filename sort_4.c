/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:35:14 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:35:20 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	mini(t_stack *stack_a)
{
	int	tmp;
	int	i;
	int	j;

	tmp = stack_a->array[stack_a->top];
	i = 0;
	j = stack_a->top;
	while (i < stack_a->top)
	{
		if (stack_a->array[i] < tmp)
		{
			j = i;
			tmp = stack_a->array[i--];
			i = 0;
		}
		i++;
	}
	return (j);
}

void	min_to_top(t_stack *stack_a)
{
	int	i;

	i = mini(stack_a);
	if (i == 2)
		ra(stack_a);
	if (i == 1)
	{
		ra(stack_a);
		ra(stack_a);
	}
	if (i == 0)
		rra(stack_a);
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	min_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}
