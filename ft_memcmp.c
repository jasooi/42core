#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)s1 + i) > *((unsigned char *)s2 + i))
            return (1);
        else if (*((unsigned char *)s1 + i) < *((unsigned char *)s2 + i))
            return (-1);
        else
            i++;
    }
    return (0);
}

/*
int main(void)
{
    int num1[5] = {};
    char str1[7] = "";

    printf("my funct: %d, actual: %d\n", ft_memcmp(num1, str1, 3), memcmp(num1, str1, 3));
}
*/