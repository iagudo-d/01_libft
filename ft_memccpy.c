/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:31:31 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:06:28 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
 *		-(void *) dst :	        pointer to the destination array where the 
 *								content is to be copied.
 *		-(const void *) src :	pointer to the source of data to be copied.
 *		-(int) c :		        the value to be compared.
 *		-(size_t) n :		    the number of bytes to be copied.
 *		 
 *	DESCRIPTION:
 * 
 *		The ft_memccpy() func copies bytes from string src to string dest. 
 *		The copying stops after the first occurrence of the character c 
 *		in the string src (not including the terminating null character). 
 *		If the character c occurs in the string src, the copy stops 
 *		and a pointer to the byte after the copy of c in the string dest
 *		is returned. 
 *		Otherwise, n bytes are copied, and a NULL pointer is returned.
 * 
 *	RETURN VALUE:
 * 
 *		(void *)	- 	pointer to the byte after the copy of c in the string dest.
 * 
 */

#include "libft.h"

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
