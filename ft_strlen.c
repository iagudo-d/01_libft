/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:00:56 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:12:29 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_strlen.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_strlen
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		size_t		ft_strlen(const char *str);
 *
 *		-(char) *str :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_strlen() determine the number of bytes
 *		of the String passed as argument in <str>
 *
 *	RETURN VALUE:
 *
 *		(INT) - Returns the number of bytes of the string (str) 
 *				passed as argument.
 *
 */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
