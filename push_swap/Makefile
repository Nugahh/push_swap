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

NAME	=	push_swap

CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra -MMD -MP -I./includes -g3

LIB		=	-Llibft/ -lft

SRCS	= 	push_swap.c			\
			rotate.c			\
			swap.c				\
			reverse_rotate.c	\
			push_a.c			\
			push_b.c			\
			sort_small_stack.c	\
			utils.c				\
			sort_big_stack.c	\
			sort_for_index.c	\
			sort.c				\
			parsing.c			\

OBJS	:=	${addprefix ./obj/,${SRCS:%.c=%.o}}

DEP		=	$(addprefix ./obj/,$(OBJS:%.o=%.d))

all: ${NAME}

-include $(DEP)

./obj/%.o: ./src/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ -c $<

${NAME}: ${OBJS} ./libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIB)
	
./libft/libft.a:
	make $(@F) -C $(@D)

clean:
	rm -rf obj/
	rm -f ${OBJS}
	make $@ -C ./libft/

fclean: 
	rm -rf obj/
	rm -f ${NAME}
	make $@ -C libft

re:	fclean all

.PHONY: all clean fclean re
