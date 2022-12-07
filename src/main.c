#include "push_swap.h"

void	single_arg(void)
{
	
}

void	sort_three()
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

void	push_swap(int size)
{
	if (size == 2)
		do_op(SA);
	else if (size == 3)
		sort_three();
	return ;
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	if (!data_set(ac, av))
		return (do_free());
	// ft_printf("BEFORE: ");
	// print_stack(a_data()->a, a_data()->top_a);
	if (!is_sorted(a_data()->a))
		push_swap(a_data()->top_a + 1);
	// ft_printf("AFTER: ");
	// print_stack(a_data()->a, a_data()->top_a);
	return (do_free());
}