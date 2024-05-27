#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char * ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        if (*ptr == c)
            return (ptr);
        i++;
        ptr++;
    }
    return ((void *)ptr);
}

int     main(void)
{
    char    str[] = "time to $LeeP";
    int     c = '$';
    int     n = 10;

    printf("my result: %s | actual result: %s\n", ft_memchr(str, c, n), memchr(str, c, n));
}