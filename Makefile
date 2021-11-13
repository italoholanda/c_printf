# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 20:13:56 by coder             #+#    #+#              #
#    Updated: 2021/11/13 20:31:57 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# AUX FUNCS
UTILS = \
	utils/nbr_printer.c

# LIBFT (HOMEMADE LIBC)
LIBFT = \
	libft/ft_atoi.c 		\
	libft/ft_bzero.c 		\
	libft/ft_calloc.c 		\
	libft/ft_isalnum.c 		\
	libft/ft_isalpha.c 		\
	libft/ft_isascii.c 		\
	libft/ft_isdigit.c 		\
	libft/ft_isprint.c 		\
	libft/ft_itoa.c 		\
	libft/ft_memchr.c 		\
	libft/ft_memcpy.c 		\
	libft/ft_memmove.c 		\
	libft/ft_memset.c 		\
	libft/ft_putchar_fd.c 	\
	libft/ft_putendl_fd.c 	\
	libft/ft_putnbr_fd.c 	\
	libft/ft_putstr_fd.c 	\
	libft/ft_split.c 		\
	libft/ft_strchr.c 		\
	libft/ft_strdup.c 		\
	libft/ft_striteri.c 	\
	libft/ft_strjoin.c 		\
	libft/ft_strlcat.c 		\
	libft/ft_strlcpy.c 		\
	libft/ft_strlen.c 		\
	libft/ft_strmapi.c 		\
	libft/ft_strncmp.c 		\
	libft/ft_strnstr.c 		\
	libft/ft_strrchr.c 		\
	libft/ft_strtrim.c 		\
	libft/ft_substr.c 		\
	libft/ft_tolower.c 		\
	libft/ft_toupper.c 		\
	libft/ft_memcmp.c

# PRINTF FUNC
PRINTF = ft_printf.c

# SOURCE CODE
SOURCE = ${PRINTF} ${LIBFT} ${UTILS}

# ALL .O FILES
OBJECTS = ${SOURCE:.c=.o}

# STATIC PRINTF LIB
NAME = libftprintf.a

# DEFAULT COMPILER
COMPILER = clang

# DEFAULT COMPILER FLAGS
FLAGS = -Wall -Wextra -Werror

# COMPILE AND BUILD STATIC LIB
$(NAME): 
		${COMPILER} ${FLAGS} -c  ${UTILS}
		mv *.o ./utils/
		${COMPILER} ${FLAGS} -c  ${LIBFT}
		mv *.o ./libft/
		${COMPILER} ${FLAGS} -c  ${PRINTF}
		ar rcs ${NAME} ${OBJECTS}

# VERIFY DEPS
all:	${NAME}

# REMOVE ALL OBJECTS
clean:
		rm -rf ${OBJECTS}

# REMOVE STATIC PRINTF LIB
fclean:	clean
		rm -rf ${NAME}
			

# REBUILD
re:		fclean all