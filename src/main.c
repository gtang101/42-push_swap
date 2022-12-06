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
	a_data()->sm = 0;
	a_data()->hi = 0;
}

void	get_high(void)
{
	int	temp;
	int	i;

	i = 0;
	temp = a_data()->a[i++];
	while (i <= a_data()->top_a)
	{
		if (temp < a_data()->a[i++])
		{
			temp = a_data()->a[i];
		}
	}
	a_data()->hi = temp;
	printf("highest: %d\n", a_data()->hi);
}

void	get_small(void)
{
	int	temp;
	int	i;

	i = 0;
	temp = a_data()->a[i++];
	printf("i here: %d\n", i);
	while (i <= a_data()->top_a)
	{
		printf("I is: %d\n", i);
		printf("temp past: %d\n", temp);
		if (temp > a_data()->a[i++])
		{
			temp = a_data()->a[i];
		}
		printf("I is: %d\n", i);
		printf("temp pres: %d\n", temp);
	}
	a_data()->sm = temp;
	printf("smallest: %d\n", a_data()->sm);
}

t_bool	data_set(int ac, char **av)
{
	int		i;

	i = 1;
	data_init();
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
		return(error_m());
	a_data()->top_a = (ac - 2);
	get_small();
	get_high();
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

int main(int ac, char **av)
{
	if (ac <= 2)
		return (0);
	if (!data_set(ac, av))
		return (do_free());
	if (is_sorted(a_data()->a))
		ft_printf("SORTED!\n");
	print_stack(a_data()->a, a_data()->top_a);
	return (do_free());
}