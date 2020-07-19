#include "../includes/minishell.h"

static char *GNL()
{
    char *line = NULL;
    get_next_line(0, &line);
    return (line);
}

int main(int argc, char **argv, char **env)
{
    char *read;
    char **command;
    int ans;

    get_env(env);
    while (1)
    { 
        ft_putstr("$>");
        read = GNL();
        command = ft_strsplit(read, ';');
        ans = ft_execute(command);
        free(read);
        if (ans == -1)
        {
            break;
        }
    }
    ft_freestr(global_env);
    return 0;
}