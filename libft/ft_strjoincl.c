#include "libft.h"

char		*ft_strjoincl(char *s1, char *s2)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	free(s1);
	s1 = NULL;
	return (new);
}
