
NAME = libft.a

SRC = 	ft_bzero.c 			\
 		ft_calloc.c 		\
 		ft_isalnum.c 		\
 		ft_isalpha.c 		\
 		ft_isascii.c 		\
 		ft_isdigit.c 		\
 		ft_isprint.c		\
 		ft_memccpy.c 		\
 		ft_memchr.c 		\
 		ft_memcpy.c 		\
 		ft_memmove.c 		\
 		ft_memset.c 		\
 		ft_strchr.c 		\
 		ft_strdup.c 		\
 		ft_strlcat.c 		\
 		ft_strlcpy.c 		\
 		ft_strlen.c 		\
 		ft_strncmp.c 		\
 		ft_strnstr.c 		\
 		ft_strrchr.c 		\
 		ft_tolower.c 		\
 		ft_toupper.c 		\
 		ft_memcmp.c 		\
 		ft_substr.c 		\
		ft_strtrim.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_atoi.c			\
		ft_putnbr_fd.c		\
		ft_itoa.c			\
		ft_strjoin.c		\
		ft_split.c			\


OBJS = $(SRC:.c=.o)

LIB = libft.h

CFLAGS		= -Werror -Wall -Wextra -c

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(LIB) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

so:
	gcc -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJS)
