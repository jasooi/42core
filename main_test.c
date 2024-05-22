/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:47:59 by jasooi            #+#    #+#             */
/*   Updated: 2024/05/22 15:34:14 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// THIS FILE CONTAINS ALL MAINS FOR TESTING THE FUNCTIONS IN LIBFT
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//#include "ft_strrchr.c"

/*
// Test for: strrchr

int	main(void)
{
	char	str[] = "hello world. this is the aliens speaking. Hand over your xylophone now!";
	char	c = 'x';
	char	d = 'X';
	char	e = '.';

	printf(" chr = %c | expected outcome = %s | my fn's outcome = %s\n", c, strrchr(str, c), ft_strrchr(str, c));

printf(" chr = %c | expected outcome = %s | my fn's outcome = %s\n", d, strrchr(str, d), ft_strrchr(str, d));

printf(" chr = %c | expected outcome = %s | my fn's outcome = %s\n", e, strrchr(str, e), ft_strrchr(str, e));

}
*/


// Test for: strncmp
#include "ft_strncmp.c"
int	main(void)
{
	char	str1[] = "mickey mouse had an affair";
	char	str2[] = "mick jagger is an ass";
	char	str3[] = "mI";
	int	n = 4;
	int	m = 7;
	
	printf(" n = %d | expected outcome = %d | my fn's outcome = %d\n", n, strncmp(str1, str2, n), ft_strncmp(str1, str2, n));
	printf(" m = %d | expected outcome = %d | my fn's outcome = %d\n", m, strncmp(str1, str2, m), ft_strncmp(str1, str2, m));
	printf(" n = %d | expected outcome = %d | my fn's outcome = %d\n", n, strncmp(str1, str3, n), ft_strncmp(str1, str3, n));
	printf(" m = %d | expected outcome = %d | my fn's outcome = %d\n", m, strncmp(str3, str2, m), ft_strncmp(str3, str2, m));


}
