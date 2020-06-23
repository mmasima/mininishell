#include "libft.h"

char	*ft_pathjoin(char *s1, char *s2)
{
	char	*temp;
	char	*result;

	temp = ft_strjoin(s1, "/");
	result = ft_strjoin(temp, s2);
	free(temp);
	return (result);
}
