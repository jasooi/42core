# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 15:57:16 by jasooi            #+#    #+#              #
#    Updated: 2024/05/25 15:57:28 by jasooi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variable definitions
CC = cc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

# Target definitions

$(NAME): $(OBJECTS)
        ar  -rc $(NAME) $(OBJECTS)


$(OBJECTS): $(SOURCES)
        $(CC) $(CFLAGS) $< 

all: $(NAME)

clean:
        echo clearing all files
        rm -f $(OBJECTS) $(NAME)

fclean: 

re: 

bonus: 

