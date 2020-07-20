#include "../includes/minishell.h"


static int ft_builtin(char **command){
    if (ft_strequ(command[0], "echo")){
     
        return(1);
    }
    else if(ft_strequ(command[0], "exit")){
        return(-1);
    }
    return 0;
}

static char **ft_split(char *command)
{
    char **arg;
    char x = 0;

    while (command[x])
    {
        if (command[x] == '"')
        {
            x++;
            while (command[x] != '"')
                x++;
        }
        else if (IS_SPACE(command[x]))
            command[x] = '"';
        x++;
    }
    arg = ft_strsplit(command, '"');
    return arg;
}

int execute_command(char **command)
{   
    struct stat file;
    int ans = 0;
    
    ans = ft_builtin(command);
    if (ans == 1){
        execute_builtin(command);
        return 0;
    }
    else if (ans == -1){
        return (-1);
    }
    // else if(lstat(command[0], file) != -1){
    // }
    else
    {
        ft_putendl("command not found");
    }
    return (1);
}

int ft_execute(char **command)
{
    int exec;
    char **args;
    int x = 0;

    if (command[0] == NULL)
        return 1;

    while (command[x])
    {
        args = ft_split(ft_strdup(command[x]));
        exec = execute_command(command);
        free(command[x]);
        if (exec == -1)
        {
            break;
        }
        return exec;
    }
    return exec;
}