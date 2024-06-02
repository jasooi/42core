/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:23:17 by jasooi            #+#    #+#             */
/*   Updated: 2024/06/01 18:38:59 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d == s || n == 0)
        return (dest);
    //forward copy - dest is in front of src
    if (d < s)
    {
        while (n--)
        {
            *d = *s;
            d++;
            s++;
        }
    }
    else if (d > s)
    {
        while (n--)
        {
            *(d + n) = *(s + n);
        }
    }
    return (dest);
}

/*
int     main(void)
{
    char src1[20] = "hello_uranus";
    char src2[20] = "hello_uranus";
    char src3[20] = "hello_uranus";
    char src4[20] = "hello_uranus";

    printf("actual: %s, my function: %s\n", memmove(src1 + 4, src1, 6), ft_memmove(src2 + 4, src2, 6));
    printf("actual: %s, my function: %s\n", memmove(src3, src3 + 8, 4), ft_memmove(src4, src4 + 8, 4));
}
*/
