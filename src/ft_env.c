#include "../includes/minishell.h"

void    get_env(char **env){

    int x = -1;
    global_env = (char **)ft_memalloc(sizeof(char *) * (env_len(env) + 1));

    while (env[++x]){
        if (!(global_env[x] = ft_strdup(env[x])))
            exit_shell();
        }
}

int  env_len(char **env){

	int	    x = 0;
	while (env[x])
		x++;
	return (x);
}