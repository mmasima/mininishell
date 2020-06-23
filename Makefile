NAME = minishell

HEADER = includes/minishell.h

LIBRARY = libft/libft.a

SRC =	src/main.c\
		src/ft_env.c\
		src/ft_free.c\
		src/ft_execute.c\
		src/builtins/ft_echo.c\
		src/builtins/ft_execute_builtins.c\
		
all: $(NAME)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(SRC) $(HEADER)
	make -C libft/
	gcc  $(SRC) $(LIBRARY) -o minishell -lreadline

clean:
	rm -f minishell

re: fclean all

.PHONY: clean fclean all re