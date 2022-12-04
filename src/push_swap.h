#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
    int             num;
    int             target_pos;
    int             current_pos;
    struct s_stack  *next;
    struct s_stack  *previous;
}   t_stack;


typedef struct s_data
{
    int     *a;
    int     *b;
    int     size_a;
    int     size_b;
    int     move_count;
    int     smallest;
}   t_data;

long int    ft_atoli(const char *str);
t_bool      within_bound(char *av);
t_bool      no_dup(int *stack, int size);
int         error_m(void);
int         error_n_free(int *s1);
#endif
