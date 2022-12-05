#include "push_swap.h"

t_data	*a_data(void)
{
	static t_data	data;

	return(&data);
}

static void	data_init(void)
{
	a_data()->a = NULL;
	a_data()->b = NULL;
	a_data()->top_a = -1;
	a_data()->top_b = -1;
	a_data()->smallest = 0;
}

int	data_set(int ac, char **av)
{
	int		i;

	i = 1;
	a_data()->a = malloc(sizeof(int)*(ac - 1));
	a_data()->b = malloc(sizeof(int)*(ac - 1));
	while (i != ac)
	{
		if(!within_bound(av[i]))
			return (error_m());
		a_data()->a[ac - i - 1] = ft_atoi(av[i]);
		i++;
	}
	if (!no_dup(a_data()->a, (ac - 1)))
		return(error_n_free(a_data()->a));
	a_data()->top_a = (ac - 2);
	return (0);
}

void	print_stack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		ft_printf("%d ", stack[i]);
		i++;
	}
	ft_printf("<= TOP\n");
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

int main(int ac, char **av)
{
	data_init();
	if (ac > 1)
		data_set(ac, av);
	print_stack(a_data()->a, ac);
	sa();
	print_stack(a_data()->a, ac);
	if (is_sorted(a_data()->a))
		ft_printf("SORTED!\n");
	if (a_data()->a)
		free(a_data()->a);
	if (a_data()->b)
		free(a_data()->b);
	return (0);
}