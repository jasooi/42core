/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:36:33 by jasooi            #+#    #+#             */
/*   Updated: 2024/06/01 17:08:16 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	const char src[50] = "hello ducksheeplamb cow goat";
   	char dest1[50] = "examplestring0000000000";
	char dest2[50] = "examplestring0000000000";
   	
   	printf("Before memcpy dest1 = %s, dest2 = %s\n", dest1, dest2);
   	memcpy(dest1, src, 17);
	ft_memcpy(dest2, src, 17);
   	printf("actual = %s, mine = %s\n", dest1, dest2);
   
   	return(0);	
}
*/
