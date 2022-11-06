#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;
	char	*result;

	index = 0;
	if (!s)
		return (NULL);
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[index] != '\0')
	{
		(*f)(index, &s[index]);
		index++;
	}
	s[index] = '\0';
}