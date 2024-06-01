# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 15:57:16 by jasooi            #+#    #+#              #
#    Updated: 2024/06/01 15:45:18 by jasooi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variable definitions
CC = cc
CFLAGS = -Wall -Werror -Wextra -c
NAME = all
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)


# Target definitions
all: $(NAME)

$(NAME): $(OBJECTS)
	echo Creating your library now... sit tight!
	ar  -rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $^ -o $@ 

.PHONY: clean all re fclean

clean:
	echo clearing all files
	rm -f *.o

fclean: clean
	echo clearing all files and the library
	rm -f $(NAME)

re: clean all 

#bonus functions need to be appended with _bonus.c / _bonus.h
#Bonus rule will add the necessary headers libraries and functions that are forbidden
#bonus: 

