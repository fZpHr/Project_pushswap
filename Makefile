# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 17:52:23 by hbelle            #+#    #+#              #
#    Updated: 2024/01/02 14:54:30 by hbelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	main.c \
	srcs/parse/check_input.c \
	srcs/data/create_array.c \
	srcs/utils/end.c \
	srcs/rules/rules_ra_rb_rr.c \
	srcs/rules/rules_rra_rrb_rrr.c \
	srcs/rules/rules_sa_sb_ss_pa_pb.c \
	srcs/utils/sorts.c \
	srcs/utils/count_add_clear.c \
	srcs/utils/sorts_cost.c \
	srcs/rules/rules_cost/rules_sa_sb_ss_pa_pb_cost.c \
	srcs/rules/rules_cost/rules_rra_rrb_rrr_cost.c \
	srcs/rules/rules_cost/rules_ra_rb_rr_cost.c \
	srcs/utils/process_sorts.c \
	srcs/utils/process_sorts_cost.c \
	srcs/utils/utils_sorts.c \
	srcs/utils/sorts_options.c \
	srcs/utils/sorts_options_cost.c \

OBJ_DIR = .o
OBJTS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))
LIBFT	=	libft/libft.a

RM	=	rm -f
HEADER =	-I includes
LIBS =	-Llibft/ -lft

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
	@echo "\033[01m\033[4;33mCompilation done\033[00m\033[1;31m -->\033[00m\033[1;32m ${NAME}\033[00m"

$(LIBFT):
	@make -C libft/

all:	${NAME}

clean:
	${RM} -r $(OBJ_DIR)
	@echo "\033[01m\033[31mRemoving objects ...\033[00m"
	@make -C libft/ fclean

fclean:	clean
	${RM} ${NAME}
	@echo "\033[01m\033[31mRemoving exec : ${NAME} ...\033[00m"

re:	fclean $(LIBFT) all

.PHONY: all clean fclean re