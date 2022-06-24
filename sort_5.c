/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 03:53:55 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:37:37 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_to_top2(t_stack *stack_a)
{
	int	i;

	i = mini(stack_a);
	if (i == 3)
		ra(stack_a);
	if (i == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	if (i == 1)
	{
		rra(stack_a);
		rra(stack_a);
	}
	if (i == 0)
		rra(stack_a);
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	min_to_top2(stack_a);
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
