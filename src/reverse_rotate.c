#include "push_swap.h"

void	rra(void)
{
	int	*temp;
	int	top;
	int	i;
	int	j;

	i = 0;
	j = 1;
	top = a_data()->top_a;
	temp = malloc(sizeof(int)*(top + 1));
	temp[top] = a_data()->a[i];
	while (i < top)
		temp[i++] = a_data()->a[j++];
	dup_stack(temp, a_data()->a, top);
	free(temp);
}

void	rrb(void)
{
	int	*temp;
	int	top;
	int	i;
	int	j;

	i = 0;
	j = 1;
	top = a_data()->top_b;
	temp = malloc(sizeof(int)*(top + 1));
	temp[top] = a_data()->b[i];
	while (i < top)
		temp[i++] = a_data()->b[j++];
	dup_stack(temp, a_data()->b, top);
	free(temp);
}

void	rrr(void)
{
	rra();
	rrb();
}