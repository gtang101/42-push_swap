/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <ktang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:47:24 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 21:04:05 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

void	sort_three(void)
{
	int	top;

	top = a_data()->top_a;
	if (a_data()->a[top] == a_data()->hi)
		do_op(RA);
	else if (a_data()->a[top - 1] == a_data()->hi)
		do_op(RRA);
	if (a_data()->a[top] > a_data()->a[top - 1])
		do_op(SA);
}

void	sort_five(void)
{
	while (a_data()->top_a != 2)
	{
		if (a_data()->a[a_data()->top_a] == a_data()->sm)
			do_op(PB);
		else
			do_op(RRA);
		get_small();
	}
	sort_three();
	while (a_data()->top_b != -1)
		do_op(PA);
}

void	push_swap(int size)
{
	if (size == 2)
		do_op(SA);
	else if (size == 3)
		sort_three();
	else if (size == 5 || size == 4)
		sort_five();
	else if (size > 5)
		sort_radix();
	return ;
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	if (!data_set(ac, av))
		return (do_free());
	if (!is_sorted(a_data()->a))
		push_swap(a_data()->top_a + 1);
	return (do_free());
}
