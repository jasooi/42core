/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:58:42 by jasooi            #+#    #+#             */
/*   Updated: 2024/06/01 16:18:40 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*m;

	i = 0;
	m = (char *)s;
	while (i < n)
	{
		m[i] = 0;
		i++;
	}
	
}

int	main(void)
{
	int	n = 6;
	char	str1[] = "hello world! Good new day.";
	char    str2[] = "hello world! Good new day.";

	bzero(str1, n);
	ft_bzero(str2, n);	

	printf("actual function: %s, mine: %s\n", str1, str2);
}
