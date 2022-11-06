/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_memccpy.c
 *  Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 * 
 * HISTORY:
 * 
 *     22-Aug-2022	Ivan Agudo <>
 */
/* 
 *	NAME:
 * 
 *		ft_memccpy
 * 
 *	SYNOPSIS:
 * 
 *		#include "libft.h"
 * 
 *		void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
 * 
 *		-(void *) dst :	        pointer to the destination array 
 *					where the content is to be copied.
 *		-(const void *) src :	pointer to the source of data to be copied.
 *		-(int) c :		the value to be compared.
 *		-(size_t) n :		the number of bytes to be copied.
 *		 
 *	DESCRIPTION:
 * 
 *		The ft_memccpy() func copies bytes from string src to string dest. 
 *		The copying stops after the first occurrence of the character c in 
 *		the string src (not including the terminating null character). 
 *		If the character c occurs in the string src, the copy stops and a 
 *		pointer to the byte after the copy of c in the string dest is returned. 
 *		Otherwise, n bytes are copied, and a NULL pointer is returned.
 * 
 *	RETURN VALUE:
 * 
 *		(void *)	- 	pointer to the byte after the copy of 
 *					c in the string dest.
 * 
 */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*origen;
	unsigned char	*destino;

	index = 0;
	origen = (unsigned char *)src;
	destino = (unsigned char *)dst;
	while (index < n)
	{
		if (origen[index] != (unsigned char)c)
		{
			destino[index] = origen[index];
		}
		else if (origen[index] == (unsigned char)c)
		{
			destino[index] = origen[index];
			return ((void *)destino + index + 1);
		}
		index++;
	}
	return (NULL);
}

int	main(void)
{
	char	*src;
	char	dst[22];
	int	i;

	src = "test basic du memccpy !";
	i = 0;
	ft_memccpy(dst, src, 'm', 22);
	printf("%s\n\n", dst);
	printf("%p\n\n", memccpy(dst, src, 'm', 0));
	while (dst[i] != '\0')
	{
		printf("%p\n", &dst[i]);
		i++;;
	}
	return (0);
}
