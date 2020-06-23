#include "../../includes/minishell.h"

char      *execute_builtin(char **command){
    if (ft_strequ(command[0], "echo")){
        (ft_echo(command + 1));
    }
    return 0;
}
