# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 17:52:23 by hbelle            #+#    #+#              #
#    Updated: 2023/12/21 19:35:27 by hbelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	main.c \
	srcs/parse/ft_check_input.c \

OBJ_DIR = .o
OBJTS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))
LIBFT	=	utils/libft.a

RM	=	rm -f
HEADER = -I includes
LIBS = -Lutils -lft

CFLAGS = -Wall -Wextra -Werror -g

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	cc $(CFLAGS) $(HEADER) -c  $< -o $@
	@if test -s $*.c; then \
			echo "\033[01m\033[35m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[032m  [OK]\033[00m";\
			else \
			echo "\033[01m\033[33m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[00m\  [Error]"; fi

$(NAME): $(OBJTS) $(LIBFT)
	cc -o $(NAME) $(OBJTS) $(LIBS) $(CFLAGS) $(HEADER)
	@echo "\033[01m\033[32mCompilation done => ${NAME}\033[00m"

all:	${NAME}
	@$ cc -o $(NAME) $(OBJTS) $(LIBS) $(CFLAGS) $(HEADER)
clean:
	${RM} -r $(OBJ_DIR)
	@echo "\033[01m\033[31mRemoving objects ...\033[00m"

fclean:	clean
	${RM} ${NAME}
	@echo "\033[01m\033[31mRemoving exec : ${NAME} ...\033[00m"

re:	fclean $(LIBFT) all

.PHONY: all clean fclean re
