/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:28:51 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:14:01 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_toupper.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_toupper
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int	ft_toupper(int c);
 *
 *		-(int) c :	a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_toupper() func takes the character passed as argument
 *		and converts it to it uppercase character if can be.
 *		If the character is not an lowercase character left it as is.
 *
 *	RETURN VALUE:
 *
 *		(int)	- 	The character on its uppercase form.
 *
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
