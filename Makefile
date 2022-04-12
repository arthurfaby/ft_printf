# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 16:22:56 by afaby             #+#    #+#              #
#    Updated: 2022/04/12 10:36:46 by afaby            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

SRCS =	ft_printf.c ft_process.c ft_count.c

OBJS =	$(SRCS:.c=.o)

HDRS =	ft_print.h

CC   =	gcc

CFLAGS = -Wall -Wextra -Werror

RM     = rm -f

AR     = ar rc

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	make -C libft
	$(AR) $(NAME) $(OBJS) libft/*.o

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all
