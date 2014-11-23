NAME = libft.a

SRCS = \
ft_strcat.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_strlen.c \
ft_strncpy.c \
ft_strnew.c \
ft_memalloc.c \
ft_memdel.c \
ft_memset.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar -rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
		/bin/rm -rf $(OBJS)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
