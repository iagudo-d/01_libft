//#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
		str[i] -= 32;
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_spc;

	ptr = NULL;
	total_spc = nmemb * size;
	if (nmemb == 0 || size == 0 || !ptr)
		ptr = NULL;
	ptr = malloc(total_spc);
	if (ptr)
		ft_memset(ptr, 0, total_spc);
	else
		return (NULL);
	return (ptr);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*result;

	index = 0;
	if (!s)
		return (NULL);
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}

int	main(void)
{
	char	*str;

	str = "LoReM IpSuM"
	ft_strmapi(str, ft_strcapitalize(ind));
}