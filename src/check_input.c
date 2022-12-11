/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <ktang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:47:40 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 21:01:45 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	within_bound(char *av)
{
	long int	max;
	long int	min;
	long int	n;

	n = ft_atoli(av);
	max = 2147483467;
	min = (max * (-1)) - 1;
	if (n > max || n < min)
		return (FALSE);
	return (TRUE);
}

t_bool	no_dup(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = (i + 1);
		while (j < size)
		{
			if (stack[j] == stack[i])
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool	is_sorted(int *s)
{
	int	i;

	i = 0;
	while (i < a_data()->top_a)
	{
		if (!(s[i] > s[i + 1]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
