#include "../includes/minishell.h"


void    exit_shell(){

    ft_freestr(global_env);
    exit(0);
}

void	ft_freestr(char **env)
{
	int x = 0;

	while (env[++x])
	{
		free(env[x]);
	}
	free(env);
	env = NULL;
}