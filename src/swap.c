#include "push_swap.h"

void    sa(void)
{
    int i;
    int temp;

    i = a_data()->top_a;
    if (i < 1)
        return ;
    temp = a_data()->a[i];
    a_data()->a[i] = a_data()->a[i - 1];
    a_data()->a[i - 1] = temp;
}

void    sb(void)
{
    int i;
    int temp;

    i = a_data()->top_b;
    if (i < 1)
        return ;
    temp = a_data()->b[i];
    a_data()->b[i] = a_data()->b[i - 1];
    a_data()->b[i - 1] = temp;
}