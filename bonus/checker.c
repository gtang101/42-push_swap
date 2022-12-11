/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:04:24 by ktang             #+#    #+#             */
/*   Updated: 2022/12/11 21:04:25 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"
#include "../gnl/get_next_line.h"

int	checker_exit(void)
{
	if (!is_sorted(a_data()->a))
		ft_printf("KO\n");
	else if (is_sorted(a_data()->a))
		ft_printf("OK\n");
	return (do_free());
}

void	move_check(char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		sa();
	else if (!ft_strncmp(str, "sb\n", 3))
		sb();
	else if (!ft_strncmp(str, "ra\n", 3))
		ra();
	else if (!ft_strncmp(str, "rb\n", 3))
		rb();
	else if (!ft_strncmp(str, "pa\n", 3))
		pa();
	else if (!ft_strncmp(str, "pb\n", 3))
		pb();
	else if (!ft_strncmp(str, "rra\n", 4))
		rra();
	else if (!ft_strncmp(str, "rrb\n", 4))
		rrb();
	else if (!ft_strncmp(str, "rr\n", 3))
		rr();
	else if (!ft_strncmp(str, "rrr\n", 4))
		rrr();
}

int	main(int ac, char **av)
{
	char	*op;

	if (ac < 2)
		return (0);
	if (!data_set(ac, av))
		return (do_free());
	op = get_next_line(0);
	while (op)
	{
		move_check(op);
		free(op);
		op = get_next_line(0);
	}
	return (checker_exit());
}
