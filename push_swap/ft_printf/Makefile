NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_putchar_fd.c\
        ft_putnbr_fd.c\
        ft_putstr_fd.c\
        isaddress_fd.c\
        islowhexa_fd.c\
        isunputnbr_fd.c\
        isuphexa_fd.c \
        isconversion.c 

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "libftprintf.a is created"

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
