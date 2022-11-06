/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:25:42 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/20 19:47:40 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isalnum.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	19-Sep-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_isalnum
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	ft_isalnum(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isalnum() func determines if a character
 *		passed in ASCII code is an aplabetical char both uppercase
 *		and lowercase or a numeric char.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase.
 *		(2)	-	Alphabetical Lowercse.
 *		(4)	-	Numeric.
 *		(0) -	Non Alphanumeric symbol.
 *
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
