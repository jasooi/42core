/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:41:43 by jasooi            #+#    #+#             */
/*   Updated: 2024/05/22 12:57:51 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>


char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "hello kak cicak!";

	printf("my fn, should return cicak: %s\n", ft_strchr(str, 99));
	printf("my fn, should return null: %s\n", ft_strchr(str, 67));
	printf("c fn, should return cicak: %s\n", strchr(str, 99));
	printf("c fn, should return null: %s\n", ft_strchr(str, 67));

}
*/
