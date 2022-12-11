/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <ktang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:49:12 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 20:57:45 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dup_stack(int *s, int *des, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		des[i] = s[i];
		i++;
	}
}

void	ra(void)
{
	int	*temp;
	int	top;
	int	i;
	int	j;

	i = 0;
	j = 1;
	top = a_data()->top_a;
	temp = malloc(sizeof(int) * (top + 1));
	temp[i] = a_data()->a[top];
	while (j <= top)
		temp[j++] = a_data()->a[i++];
	dup_stack(temp, a_data()->a, top);
	free(temp);
}

void	rb(void)
{
	int	*temp;
	int	top;
	int	i;
	int	j;

	i = 0;
	j = 1;
	top = a_data()->top_b;
	temp = malloc(sizeof(int) * (top + 1));
	temp[i] = a_data()->b[top];
	while (j <= top)
		temp[j++] = a_data()->b[i++];
	dup_stack(temp, a_data()->b, top);
	free(temp);
}

void	rr(void)
{
	ra();
	rb();
}
