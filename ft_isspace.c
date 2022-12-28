/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:09:01 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/12/27 21:30:55 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isspace.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isspace
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isspace(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isspace() func determines if a character
 *		passed in ASCII code is an space char.
 *
 *	RETURN VALUE:
 *
 *		(8)	- 	Space or tab character.
 *		(0) -	Non space or tab character.
 *
 */

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (8);
	return (0);
}
