/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <ktang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:48:28 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 20:53:42 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(void)
{
	int	i;
	int	temp;

	i = a_data()->top_a;
	if (i < 1)
		return ;
	temp = a_data()->a[i];
	a_data()->a[i] = a_data()->a[i - 1];
	a_data()->a[i - 1] = temp;
}

void	sb(void)
{
	int	i;
	int	temp;

	i = a_data()->top_b;
	if (i < 1)
		return ;
	temp = a_data()->b[i];
	a_data()->b[i] = a_data()->b[i - 1];
	a_data()->b[i - 1] = temp;
}

void	ss(void)
{
	sa();
	sb();
}
