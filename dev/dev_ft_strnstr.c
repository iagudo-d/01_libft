//#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_index;
	size_t	n_index;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	h_index = 0;
	n_index = 0;
	while (1)
	{
		if (needle[n_index] == '\0')
			return ((char *)(haystack + (h_index - n_index)));
		if (haystack[h_index] == needle[n_index])
			n_index++;
		else
		{
			h_index -= n_index;
			n_index = 0;
		}
		if (haystack[h_index] == '\0' || h_index >= len)
			return (NULL);
		h_index++;
	}
}

int	main(void)
{
	char	*needle;
	char	*haystack;
	char	*result;

	needle = "aabc";
	haystack = "aaabcabcd";
	result = ft_strnstr(haystack, needle, -1);
	printf("RESULTADO: %s\n", result);
	return (0);
}