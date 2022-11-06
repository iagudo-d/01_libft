/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:35:31 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:35:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isupper.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isupper
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isupper(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isupper() func determines if a character
 *		passed in ASCII code is an aplabetical uppercase char.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase char.
 *		(0) -	Non Alphabetical Uppercase char.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	main(void)
{
	int	i;

	i = 0;
	printf("Nº\t\t--\tCHAR\t\t--\tOWN_FUNCT\t--\tSYS_FUNCT\n");
	printf("-------------------------------------------------------------\n");
	while (i <= 127)
	{
		printf("%i\t\t--\t%c\t\t--\t%i\t\t--\t%i\n", i, i, ft_isupper(i), isupper(i));
		i++;
	}
	return (0);
}
