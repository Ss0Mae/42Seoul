CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SRCS = do_op.c ft_atoi.c ft_calcu.c ft_putnbr.c
OBJS = $(SRCS:.c=.o)
HEADER = -I do_op.h

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
%.o : %.c do_op.h
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
