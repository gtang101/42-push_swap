#include "push_swap.h"

int	error_m(void)
{
	ft_printf("Error\n");
	return (0);
}

int	error_n_free(int *s1)
{
	if (s1)
		free(s1);
	return (error_m());
}