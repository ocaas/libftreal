CC = cc

NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memcmp.c \
	ft_memchr \
	ft_bzero.c \
	ft_atoi.c \
	ft_calloc.c \

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	
%.o: %.c
	@echo "Compiling... " $<
	@$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm $(OBJ) $(NAME)