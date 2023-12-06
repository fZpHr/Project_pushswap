# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbelle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 09:46:16 by hbelle            #+#    #+#              #
#    Updated: 2023/12/04 09:47:14 by hbelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putnbr_fd_unsigned.c \
	ft_putnbr_fd_base_unsigned.c \
	ft_printf.c \
	ft_strlen.c \
	ft_countdigits.c \
	ft_countdigits_unsigned.c \
	ft_countdigits_base_unsigned.c \
	ft_printf_check.c 
	
OBJTS	=	${SRCS:.c=.o}

CC	=	cc
RM	=	rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJTS}
		ar rcs ${NAME} ${OBJTS}

all:	${NAME}

clean:
	${RM} ${OBJTS}
	
fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all bonus clean fclean re
