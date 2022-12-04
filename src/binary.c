#include "push_swap.h"

int ft_abs(int nb)
{
    if (nb < 0)
        nb = nb * (-1);
    return (nb);
}

int ft_maxbit(int nb)
{
    int bit;
    
    bit = 0;
    while (bit < 32)
    {
        if (!(nb >> bit))
            break;
        bit++;
    }
    return (bit);
}

int main(int ac, char **av){
    int nb;
    int i;
    int bit;
    
    i = 1;
    bit = 0;
    if (ac <= 1)
        return (0);
    while (av[i] != NULL)
    {   
        nb = ft_abs(ft_atoi(av[i]));
        printf("maxbit: %d\n", ft_maxbit(nb));
        if (nb == 0)
            printf("0\n");
        while (bit < ft_maxbit(nb))
        {
            printf("%d", ((nb >> bit) & 1));
            if (!(nb >> bit))
                break;
            bit++;
        }
        i++;
        bit = 0;
        printf("\n");
    }
    return (0);
}