/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isgraph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:48:14 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:48:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isgraph.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isgraph
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isgraph(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isgraph() func determines if a character
 *		passed in ASCII code is a graphical char
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase char.
 *		(2)	-	Alphabetical Lowercse char.
 *		(4)	-	Digit char.
 *		(16)-	Other printable char.
 *		(0) -	Non Alphanumeric symbol.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isgraph(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64))
		return (16);
	else if ((c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (16);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 48 && c <= 57)
		return (4);
	else
		return (0);
}

int	main(void)
{
	int	i;

	i = 0;
	printf("Nº\t\t--\tCHAR\t\t--\tOWN_FUNCT\t--\tSYS_FUNCT\n");
	printf("----------------------------------------------------------------\n");
	while (i <= 127)
	{
		printf("%i\t\t--\t%c\t\t--\t%i\t\t--\t%i\n", i, i, ft_isgraph(i), isgraph(i));
		i++;
	}
	return (0);
}
