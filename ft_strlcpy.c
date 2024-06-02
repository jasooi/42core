#include "libft.h"
#include <string.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t  i;
    int j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
        j++;
    while (i < destsize - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (j);
}

int     main(void)
{
    size_t  destsize = 8;
    char    str1[20] = "hello world";
    char    dest1[20] = "          y";
    char    str2[20] = "hello world";
    char    dest2[20] = "          y";

    printf("actual: %s, mine: %s\n", strlcpy(dest1, str1, destsize), ft_strlcpy(dest2, str2, destsize));
}