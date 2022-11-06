/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:22:47 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/20 19:48:07 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_memset.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	19-Sep-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_memset
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	*ft_memset(void *s, int c, unsigned int n);
 *
 *		-(void) *s 		:		a pointer to the memdir to be set.
 *		-(int)	c 		:		a int number of the ASCII char to set.
 *		-(unsigned int) :		a number of bytes to be filled with <c>.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_memset() func takes a pointer to a memory space
 *		and fill the first <n> bytes with the char passed on <c>
 *
 *	RETURN VALUE:
 *
 *		(*pointer)	Return a pointer to the memdir of the s String
 *
 */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		((unsigned char *)s)[index++] = c;
	return (s);
}
