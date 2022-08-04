# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwong <fwong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:53:23 by fwong             #+#    #+#              #
#    Updated: 2022/07/25 01:37:48 by fwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap.a

SRCS	= 	push_swap.c \
			src/rotate.c src/swap.c src/reverse_rotate.c src/push_a.c \
			src/push_b.c src/sort_small_stack.c src/utils.c \
			src/sort_big_stack.c

OBJS	= ${SRCS:.c=.o}

CC	= cc

CFLAGS	= -Wall -Werror -Wextra -I./includes

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make -C libft
	
	cp libft/libft.a .

	mv libft.a ${NAME}
	
	ar rcs ${NAME} ${OBJS}

bonus:	${Bonus_OBJS}
	ar rcs ${NAME} ${Bonus_OBJS}

clean:
	rm -f ${OBJS} ${Bonus_OBJS}
	
	make clean -C libft

fclean: clean
	rm -f ${NAME}

	make fclean -C libft

test: ${OBJS}
	make -C libft
	
	cp libft/libft.a .

	mv libft.a ${NAME}
	
	cc ${NAME} ${OBJS} push_swap.a

re:		fclean all

.PHONY: all clean fclean re

