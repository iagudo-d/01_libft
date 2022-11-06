//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		((unsigned char *)s)[index++] = c;
	return (s);
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

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	src_len;
	size_t	index;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	index = 0;
	while (index < len && start + index < src_len)
	{
		substr[index] = s[index + start];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}

int	main(void)
{
	char	*str;
	char	*substring;

	str = "i just want this part ##################";
	substring = ft_substr(str, 0, 22);
	printf("\n\t%s\n\n", str);
	printf("\n\t%s\n\n", substring);
	return (0);
}
