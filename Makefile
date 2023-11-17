SRCS =  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c  ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_putchar_fd.c ft_strtrim.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_strmapi.c\

		

	

NAME = libft.a
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
INCS = .
so = libft.so

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

all: ${NAME}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all