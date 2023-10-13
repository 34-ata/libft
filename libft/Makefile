COMPILER = cc
COMP_FLAGS = -Wall -Werror -Wextra
SRCS = ft_*.c
OBJECTS = ${SRCS:.c=.o}
LIBR = ranlib
LIBC = ar rc
RM = rm -f
NAME = libft.a

.c.o:
	${COMPILER} ${COMP_FLAGS} -c ${SRCS}

${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}
	${LIBR} ${NAME} 

clean: 
	${RM} ${OBJECTS}

all: ${NAME}

fclean: clean
	${RM} ${NAME}

re: fclean all
