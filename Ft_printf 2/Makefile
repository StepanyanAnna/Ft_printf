# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annstepa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 17:17:25 by annstepa          #+#    #+#              #
#    Updated: 2022/04/25 17:30:27 by annstepa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libftprintf.a
SRCS		= $(shell find "." -name "*.c")
OBJS		= $(SRCS:.c=.o)
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f
CC			= cc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
