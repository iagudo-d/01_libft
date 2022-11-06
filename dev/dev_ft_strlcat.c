#include <string.h>
#include <stdio.h>
//#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	dst_length;
	size_t	remaing;

	dest = dst;
	source = (char *)src;
	remaing = dstsize;
	while (remaing-- != 0 && *dest != '\0')
		dest++;
	dst_length = dest - dst;
	remaing = dstsize - dst_length;
	if (remaing == 0)
		return (dst_length + strlen(source));
	while (*source != '\0')
	{
		if (remaing > 1)
		{
			*dest++ = *source;
			remaing--;
		}
		source++;
	}
	*dest = '\0';
	return (dst_length + (source - src));
}

int	main(void)
{
	char	first[] = "This is ";
	char	last[] = "a potentially long string";
	int		r;
	int		size = 16;
	char	buffer[size];

	strcpy(buffer, first);
	r = ft_strlcat(buffer, last, size);
	puts (buffer);
	printf("Value returned: %d\n", r);
	if (r > size)
		puts ("String truncated");
	else
		puts ("String was fully copied");
	return (0);
}
