SRCS			= main.c errors.c ft_atoi.c control.c utils.c sorting.c operations.c quicksort.c utils2.c before_op.c sort_process.c
RM				= rm -f
GCC				= gcc -Wall -Wextra -Werror
NAME			= push_swap
all:			$(SRCS) $(NAME)


$(NAME): $(SRCS)
	$(GCC) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:			clean

re:				fclean $(NAME)


.PHONY:			all clean fclean re
