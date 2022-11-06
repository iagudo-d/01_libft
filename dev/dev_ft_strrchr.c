#include <stdio.h>
#include <string.h>
#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*save;
	char	*p_s;

	save = NULL;
	len = strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (len + 1 > 0)
	{
		p_s = (char *)s + len;
		if (*(s + len) == (unsigned char)c)
		{
			save = (char *)(s + len);
			return (save);
		}
		len--;
	}
	return (0);
}

int	main(void)
{
	char	*src;
	int		letter;
	char	*result;

	src = "abbbb";
	letter = 'a';
	result = ft_strrchr(src, letter);
	printf("El resultado:\n");
	printf("MEMORIA: %p\n", result);
	printf("CADENA: %s\n", result);
	return (0);
}