/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_ispunct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:38:12 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:43:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_ispunct.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_ispunct
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_ispunct(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isp() func determines if a character
 *		passed in ASCII code is a puntuation char.
 *
 *	RETURN VALUE:
 *
 *		(16)- 	Puntuation symbol.
 *		(0) -	Non puntuation symbol.
 *
 */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64))
		return (16);
	else if ((c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (16);
	return (0);
}

int	main(void)
{
	int	i;

	i = 0;
	printf("All punctuations in C: \n");
	printf("Nº\t\t--\tCHAR\t\t--\tSYS_RESULT\t\t--\tOWN_RESULT\n");
	printf("--------------------------------------------------------------\n");
	while (i <= 127)
	{
		if (ispunct(i) != 0)
		{
			printf("%i\t\t--\t%c\t\t--\t%i\t\t--\t%i\n\n", i, i, ispunct(i), ft_ispunct(i));
		}
		i++;
	}
	return (0);
}
