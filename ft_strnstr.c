/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:35:27 by jasooi            #+#    #+#             */
/*   Updated: 2024/05/22 17:27:14 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0' && (i + j) < n)
			return (&str[i]);
		i++;
	}
	return (0);
}



int     main(void)
{
        char    str1[] = "your xylophone now!";
        char    str2[] = "xylop";
	    char	str3[] = "xy";
        int    n = 15;
	    int	m = 7;

        printf(" n = %d | expected outcome = %s | my fn's outcome = %s\n", n, strnstr(str1, str2, n), ft_strnstr(str1, str2, n));

	    printf(" n = %d | expected outcome = %s | my fn's outcome = %s\n", n, strnstr(str1, str3, n), ft_strnstr(str1, str3, n));

	    printf(" m = %d | expected outcome = %s | my fn's outcome = %s\n", m, strnstr(str1, str2, m), ft_strnstr(str1, str2, m));
}

