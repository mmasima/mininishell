#include "libft.h"

char		*ft_strjoinchf(char *str, char c)
{
	char	*new;

	new = ft_strjoinch(str, c);
	if (!new)
		return (NULL);
	free(str);
	str = NULL;
	return (new);
}
