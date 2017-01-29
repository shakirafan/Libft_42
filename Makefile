NAME = libft.a

CC = gcc

FLAGS = -Wextra -Werror -Wall

SRC = ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putendl_fd.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strlcat.c \
		ft_strjoin.c \
		ft_strrev.c \
		ft_strsub.c \
		ft_strstrim.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_strrchr.c \
		ft_strnew.c \
		ft_strncpy.c \
		ft_strcpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strchr.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_strsplit

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
%.o : %.c
		$(CC) $(FLAGS) -c $< -I .
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all



