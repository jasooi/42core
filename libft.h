/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:28:08 by jasooi            #+#    #+#             */
/*   Updated: 2024/05/22 15:32:52 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


int     ft_isalpha(int c);
int     ft_isdigit(int c);

int     ft_isalnum(int c);
int     ft_isascii(int c);
char    *ft_strchr(const char *str, int c);
int     ft_strlen(char *str);
char    *ft_strrchr(char *str, int chr);
int     ft_tolower(int c);

int     ft_toupper(int c);
int     ft_strncmp(const char *str1, const char *str2, int n);



#endif
