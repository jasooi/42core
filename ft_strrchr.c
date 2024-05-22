/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:58:30 by jasooi            #+#    #+#             */
/*   Updated: 2024/05/22 14:47:32 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int chr)
{
	int	i;
	int	latest;

	i = 0;
	latest = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			latest = i;
		i++;
	}
	if (latest != 0)
		return (str + latest);
	return (NULL);
}
