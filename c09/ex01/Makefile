NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wextra -Werror -Wall 

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all: 		${NAME}

${NAME}:	${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

clean:
				rm -f ${OBJS}

fclean:		clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
