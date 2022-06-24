/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 00:16:59 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/25 00:22:59 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack *stack_a, t_stack *stack_b, int ac)
{
	if (ac <= 6)
	{
		if (ac == 3)
			sort_2(stack_a);
		else if (ac == 4)
			sort_3(stack_a);
		else if (ac == 5)
			sort_4(stack_a, stack_b);
		else if (ac == 6)
			sort_5(stack_a, stack_b);
	}
}
