#ifndef MINISHELL_H
# define MINISHELL_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <unistd.h>
# include <signal.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/libft.h"
# define IS_QUOTE(x) (x == '"' || x == '\'')

char    **global_env;

int     main(int argc, char **argv, char **env);
int     env_len(char **env);
void	ft_freestr(char **env);
void    get_env(char **env);
void    exit_shell();
int     ft_execute(char **command);
int     execute_command(char **command);
char    *execute_builtin(char **command);

//builtins
int     ft_echo(char **args);

#endif