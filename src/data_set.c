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
	temp = a_data()->a[i];
	while (i <= a_data()->top_a)
	{
		if (temp < a_data()->a[i])
			temp = a_data()->a[i];
		i++;
	}
	a_data()->hi = temp;
}

void	get_small(void)
{
	int	temp;
	int	i;
	int	smol;

	i = 0;
	temp = a_data()->a[i];
	while (i <= a_data()->top_a)
	{
		if (temp > a_data()->a[i])
		{
			temp = a_data()->a[i];
			smol = i;
		}
		i++;
	}
	a_data()->sm = temp;
	a_data()->low_i = smol;
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