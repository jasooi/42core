
#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void    *ft_memset(void * s, int c, size_t n)
{
    size_t  i;
    
    i = 0;
    if (c < 0 || c > 127)
        c = c % 255;
    while (i < n)
    {
        ((unsigned char *)s)[i] = c;
        i++;
    }
    return (s);
}

int     main(void)
{
    char    str[] = "hello Mars";
    int    c = 264;
    size_t  n = 5;

    ft_memset(str, c, n);
    printf("%s\n", str);
}