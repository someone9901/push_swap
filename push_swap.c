/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:08:30 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/25 00:22:07 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*createstack_a(unsigned int len, t_stack *stack_a)
{
	stack_a = malloc(sizeof(t_stack));
	stack_a->len = len;
	stack_a->top = -1;
	stack_a->array = (int *)malloc(stack_a->len * sizeof(int));
	return (stack_a);
}

t_stack	*createstack_b(unsigned int len, t_stack *stack_b)
{
	stack_b = malloc(sizeof(t_stack));
	stack_b->len = len;
	stack_b->top = -1;
	stack_b->array = (int *)malloc(stack_b->len * sizeof(int));
	return (stack_b);
}

void	push(t_stack *stack_a, int item)
{
	stack_a->array[++stack_a->top] = item;
}

void	push_item(int len, t_stack *stack_a, char **av)
{
	while (len > 0)
	{
		push(stack_a, ft_atoi(av[len]));
		len--;
	}
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (duplicate(ac, av) != 0)
	{
		error("Error");
		exit(1);
	}
	while (av[i])
		check_d(av[i++]);
	if (check_sorted(av, ac - 1))
		exit(0);
	stack_a = createstack_a(ac - 1, stack_a);
	stack_b = createstack_b(ac - 1, stack_b);
	push_item(ac - 1, stack_a, av);
	small_sort(stack_a, stack_b, ac);
	if (ac > 6)
	{
		sort_rx(stack_a);
		radix_sort(stack_a, stack_b);
	}
}
