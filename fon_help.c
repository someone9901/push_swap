/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fon_help.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:11:01 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:32:04 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (!str[i])
	{
		error("Error");
		exit(1);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	check_sorted(char **av, int len)
{
	int	i;

	i = 1;
	while (av[i] && i < len)
	{
		if (ft_atoi(av[i]) < ft_atoi(av[i + 1]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	is_aempty(t_stack *stack_a)
{
	return (stack_a->top == -1);
}
