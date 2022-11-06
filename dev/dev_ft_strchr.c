#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = strlen(s);
	while (index <= len)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)(s));
		}
		s++;
		index++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	int		letter;

	str = "El striing donde buscar";
	letter = 's';
	ft_strchr(str, letter);
	printf("El resultado:\n");
	printf("MEMORIA: %p\n", ft_strchr(str, letter));
	printf("CADENA: %s\n", ft_strchr(str, letter));
	return (0);
}
