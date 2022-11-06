//#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			result;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*str1 == *str2) && (n - 1 > 0) && (*str1 != '\0' || *str2 != '\0'))
	{
		str1++;
		str2++;
		n--;
	}
	result = (*str1 - *str2);
	return (result);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;
	size_t	len;

	str1 = "atoms\0\0\0\0";
	str2 = "atoms\0abc";
	len = strlen("the cake is a lie !\0I'm hidden lol\r\n");
	result = ft_strncmp(str1, str2, 8);
	if (result == 0)
		printf("Los strings son iguales");
	else if (result > 0)
		printf("El string uno es mayor que el dos");
	else
		printf("El string dos es mayor que el uno");
	return (0);
}