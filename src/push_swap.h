#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_data
{
	int     *a;
	int     *b;
	int     top_a;
	int     top_b;
	int     sm;
	int		hi;
}   t_data;

enum	e_op
{
	PA = 1,
	PB = 2,
	RA = 3,
	RB = 4,
	RR = 5,
	RRA = 6,
	RRB = 7,
	RRR = 8,
	SA = 9,
	SB = 10,
	SS = 11
};

t_data		*a_data(void);
t_bool		data_set(int ac, char **av);
void		dup_stack(int *s, int *des, int	size);
t_bool		within_bound(char *av);
t_bool		no_dup(int *stack, int size);
t_bool		is_sorted(int *s);
void		get_high(void);
void		get_small(void);

long int	ft_atoli(const char *str);
t_bool		error_m(void);
int			do_free(void);
void		print_stack(int *stack, int size);

void		do_op(int op);

void		sa(void);
void		sb(void);
void		ss(void);
void		pa(void);
void		pb(void);
void		ra(void);
void		rb(void);
void		rr(void);
void		rra(void);
void		rrb(void);
void		rrr(void);
#endif
