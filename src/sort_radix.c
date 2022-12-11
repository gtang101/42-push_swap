#include "push_swap.h"

int	smol(int cur)
{
	int	i;
	int	temp;
	int	smol;

	temp = 2147483647;
	i = 0;
	while (i <= a_data()->top_a)
	{
		if (a_data()->a[i] < temp && a_data()->a[i] > cur)
		{
			temp = a_data()->a[i];
			smol = i;
		}
		i++;
	}
	a_data()->sm = temp;
	return (smol);
}

void	index_stack(void)
{
	int	i;
	int	small;
	int	j;
	int	*c;

	i = 1;
	c = malloc(sizeof(int)*(a_data()->top_a + 1));
	c[a_data()->low_i] = 0;
	small = a_data()->sm;
	while (i <= a_data()->top_a)
	{
		j = smol(a_data()->sm);
		c[j] = i;
		i++;
	}
	a_data()->sm = small;
	dup_stack(c, a_data()->a, a_data()->top_a);
	free(c);
}

void	sort_radix(void)
{
	int	i;
	int	j;
	int	top;

	i = 0;
	j = 0;
	index_stack();
	while (!is_sorted(a_data()->a))
	{
		j = a_data()->top_a;
		while (j-- >= 0)
		{
			top = a_data()->a[a_data()->top_a];
			if (!(top & (1 << i)))
				do_op(PB);
			else
				do_op(RA);
		}
		while (a_data()->top_b >= 0)
			do_op(PA);
		i++;
	}
}