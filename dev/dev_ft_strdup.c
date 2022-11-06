//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		((unsigned char *)s)[index++] = c;
	return (s);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void    *ft_calloc(size_t nmemb, size_t size)
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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	spc_req;
	char	*duplicate;

	spc_req = ft_strlen(s1);
	duplicate = ft_calloc(spc_req + 1, sizeof(char));
	if (duplicate)
	{
		ft_memcpy(duplicate, s1, spc_req);
		duplicate[spc_req] = '\0';
	}
	else
		return (NULL);
	return (duplicate);
}

int	main(void)
{
	char	*str_original;
	char	*str_copia;

	str_original = "Voy a ser copiado";
	str_copia = ft_strdup(str_original);
	printf("\n\t%s\n\n", str_original);
	printf("\n\t%s\n\n", str_copia);
	return (0);
}
