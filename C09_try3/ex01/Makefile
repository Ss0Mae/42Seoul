CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HEADER = -I includes

all : $(NAME)
$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o : %.c includes
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
