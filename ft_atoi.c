//INCOMPLETE

#include "libft.h"

int     ft_atoi(const char *str)
{
    int     i;
    int     s;
    int     r;

    i = 0;
    s = 1;
    r = 0;
    while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s *= -1;
    }
    while (str[++i] > 47 && str[++i] < 58)
    {
        //call the recursive function i think
    }


    return (r);
}