/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:50:04 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 20:50:06 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		ft_printf("%d ", stack[i]);
		i++;
	}
	ft_printf("<= TOP\n");
}

t_bool	error_m(void)
{
	ft_printf("Error\n");
	return (FALSE);
}

int	do_free(void)
{
	if (a_data()->a)
		free(a_data()->a);
	if (a_data()->b)
		free(a_data()->b);
	return (0);
}
