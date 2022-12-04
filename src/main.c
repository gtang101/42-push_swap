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
	a_data()->size_a = 0;
	a_data()->size_b = 0;
	a_data()->move_count = 0;
	a_data()->smallest = 0;
}

void	print_stack(int *stack, int size)
{
	int	i;

	data_init();
	i = 0;
	while (i < (size - 1))
	{
		ft_printf("%d ", stack[i]);
		i++;
	}
	ft_printf("<= TOP\n");
}

int main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		a_data()->a = malloc(sizeof(int)*(ac - 1));
		a_data()->b = malloc(sizeof(int)*(ac - 1));
		while (i < ac)
		{
			if(!within_bound(av[i]))
				return (error_m());
			a_data()->a[i - 1] = ft_atoi(av[i]);
			i++;
		}
		if (!no_dup(a_data()->a, (ac - 1)))
			return(error_n_free(a_data()->a));
		print_stack(a_data()->a, ac);
		free (a_data()->a);
	}
	return (0);
}