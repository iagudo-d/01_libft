/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:53:42 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:02:17 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_bzero.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	20-Sep-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_bzero
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	ft_bzero(void *s, size_t n);
 *
 *		-(void) *s :	a pointer to a memdir of any type of data
 *		-size_t n  :	number of bytes will be filled with "0"
 
 *	DESCRIPTION:
 *
 *		The ft_bzero() func erases the "n" first bytes of
 *		memory pointed to by "s", writings zeros ( '\0' )
 *		on that memory area.
 *
 *	RETURN VALUE:
 *
 *		NONE
 *
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
