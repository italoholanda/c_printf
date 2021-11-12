UTILS = \
	utils/nbr_printer.c

PRINTF = ft_printf.c

SOURCE = ${PRINTF} ${UTILS}

OBJECTS = ${SOURCE:.c=.o}

NAME = libftprintf.a

COMPILER = clang

FLAGS = -Wall -Wextra -Werror

