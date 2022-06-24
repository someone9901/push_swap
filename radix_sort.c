/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 01:13:12 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:33:50 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_rx(t_stack *stack_a)
{
	int	*tmp;
	int	j;
	int	k;
	int	i;

	i = -1;
	tmp = malloc(sizeof (int *) * stack_a->len);
	while (++i < stack_a->len)
		tmp[i] = stack_a->array[i];
	i = -1;
	while (++i < stack_a->len)
	{
		j = i + 1;
		while (j < stack_a->len)
		{
			if (tmp[i] > tmp[j])
			{
				k = tmp[j];
				tmp[j] = tmp[i];
				tmp[i] = k;
			}
			j++;
		}
	}
	change_idx(stack_a, tmp);
}

void	change_idx(t_stack *stack_a, int *tmp)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->len)
	{
		j = 0;
		while (j < stack_a->len)
		{
			if (stack_a->array[i] == tmp[j])
			{
				stack_a->array[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	sort(t_stack *stack_a, t_stack *stack_b, int num_bit)
{
	int	i;

	i = 0;
	while (i < stack_a->len)
	{
		if (((stack_a->array[stack_a->top] >> num_bit) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
	while (!is_bempty(stack_b))
	{
		pa(stack_a, stack_b);
	}
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	max;
	int	max_bits;

	max_bits = 0;
	max = stack_a->top;
	while ((max >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		sort(stack_a, stack_b, i);
		i++;
	}
}
