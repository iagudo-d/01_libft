//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
	}
	return (dst);
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoined;
	char	*str1;
	char	*str2;
	size_t	str1_siz;
	size_t	str2_siz;

	if (!s1 || !s2)
		return (NULL);
	str1_siz = ft_strlen(str1);
	str2_siz = ft_strlen(str2);
	strjoined = ft_calloc(str1_siz + str2_siz + 1, sizeof(char));
	if (!strjoined)
		return (NULL);
	ft_memcpy(strjoined, str1, str1_siz);
	ft_memcpy(strjoined + str1_siz, str2, str2_siz);
	strjoined[str1_siz + str2_siz] = '\0';
	return (strjoined);
}