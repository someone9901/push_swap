/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:33:32 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/24 07:28:57 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

int	check_max(long j)
{
	if (j > 2147483647 || j < -2147483648)
		return (0);
	else
		return (1);
}

int	duplicate(int ac, char **str)
{
	int	a;
	int	i;
	int	tmp;
	int	r;

	a = ac - 1;
	i = a;
	r = 0;
	while (i > 0)
	{
		tmp = ft_atoi(str[i]);
		while (a > 0)
		{
			if (tmp == ft_atoi(str[a]))
				r++;
			a--;
		}
		if (r > 1)
			return (1);
		a = ac - 1;
		r = 0;
		i--;
	}
	return (0);
}

void	check_d(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' && (str[i + 1] >= 48 && str[i + 1] <= 57))
			|| ((str[i] == '+' && (str[i + 1] >= 48 && str[i + 1] <= 57))))
			i++;
		if (!ft_isdigit(str[i]) || !check_max(ft_atoi(str)))
		{
			error("Error");
			exit(1);
		}
		if ((ft_isdigit(str[i]))
			&& (str[i + 1] == '-' || str[i + 1] == '+'))
		{
			error("Error");
			exit(1);
		}
		i++;
	}
}
