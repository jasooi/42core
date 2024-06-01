/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:47:55 by jasooi            #+#    #+#             */
/*   Updated: 2024/06/01 15:58:01 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<ctype.h>
#include<stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	c1 = 'w';
	char	c2 = 'T';
	char	c3 = '|';
	int	c4 = 544;

	printf("my function: %d, actual function: %d\n", ft_isprint(c1), isprint(c1));
	printf("my function: %d, actual function: %d\n", ft_isprint(c2), isprint(c2));
	printf("my function: %d, actual function: %d\n", ft_isprint(c3), isprint(c3));
	printf("my function: %d, actual function: %d\n", ft_isprint(c4), isprint(c4));
}
*/
