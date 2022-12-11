/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <ktang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:47:54 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 20:59:06 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(void)
{
	int	a_i;
	int	b_i;

	a_i = a_data()->top_a + 1;
	b_i = a_data()->top_b;
	if (a_i == -1)
		return ;
	a_data()->a[a_i] = a_data()->b[b_i];
	a_data()->top_a++;
	a_data()->top_b--;
}

void	pb(void)
{
	int	a_i;
	int	b_i;

	a_i = a_data()->top_a;
	b_i = a_data()->top_b + 1;
	if (a_i == -1)
		return ;
	a_data()->b[b_i] = a_data()->a[a_i];
	a_data()->top_a--;
	a_data()->top_b++;
}
