# AUX FUNCS
UTILS = \
	utils/nbr_printer.c

# PRINTF FUNC
PRINTF = ft_printf.c

# SOURCE CODE
SOURCE = ${PRINTF} ${UTILS}

# ALL .O FILES
OBJECTS = ${SOURCE:.c=.o}

# STATIC LIB
NAME = libftprintf.a

# DEFAULT COMPILER
COMPILER = clang

# DEFAULT COMPILER FLAGS
FLAGS = -Wall -Wextra -Werror

# COMPILE AND BUILD STATIC LIB
$(NAME): 
		${COMPILER} ${FLAGS} -c  ${UTILS}
		mv *.o ./utils/
		${COMPILER} ${FLAGS} -c  ${PRINTF}
		ar rcs ${NAME} ${OBJECTS}

# VERIFY DEPS
all:	${NAME}

# REMOVE ALL OBJECTS
clean:
		rm -rf ${OBJECTS}

# REMOVE STIC LIB
fclean:
		rm -rf ${NAME}

# REBUILD
re:
		fclean all

