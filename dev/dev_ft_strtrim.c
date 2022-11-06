//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
	if (nmemb >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(total_spc);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_spc);
	return (ptr);
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

static int	ft_check_char(char c, char *set_of_chars)
{
	while (*set_of_chars)
	{
		if (*set_of_chars == c)
			return (1);
		else
			set_of_chars++;
	}
	return (0);
}

static size_t	ft_return_mem(char *where,
char *what, size_t len, int direccion)
{
	int	current;

	if (direccion == 1)
		current = 0;
	else if (direccion == -1)
		current = len;
	while (len > 0)
	{
		if (ft_check_char(where[current], what) == 0)
			return (current);
		len--;
		current += direccion;
	}
	return (current);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	str_len;
	size_t	init;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	str_len = ft_strlen(s1);
	init = ft_return_mem((char *)s1, (char *)set, str_len, 1);
	end = ft_return_mem((char *)s1, (char *)set, str_len - 1, -1);
	if (end < init)
		return (ft_strdup(""));
	result = ft_calloc(((end + 1) - init) + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1 + init, ((end + 1) - init) + 1);
	result[(end + 1) - init] = '\0';
	return (result);
}

int	main(void)
{
	char	*str;
	char	*del;
	char	*res;
	char	*str_test15;
	char	*del_test15;

	str_test15 = "abcdba";
	str = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	del = " \t\n";
	del_test15 = "acb";
	res = ft_strtrim(str_test15, del_test15);
	printf("\n\t%s\n", res);
	return (0);
}
