//#include "libft.h"
#include <stdlib.h>

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


int	main(void)
{
	char	*str;

	str = calloc(40, 1);
	return (0);
}