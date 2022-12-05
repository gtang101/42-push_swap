#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_data
{
	int     *a;
	int     *b;
	int     top_a;
	int     top_b;
	int     smallest;
}   t_data;

t_data		*a_data(void);
long int	ft_atoli(const char *str);
t_bool		within_bound(char *av);
t_bool		no_dup(int *stack, int size);
int			error_m(void);
int			error_n_free(int *s1);

void		sa(void);
#endif
