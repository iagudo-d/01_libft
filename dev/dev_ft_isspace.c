/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isspace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:36:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:36:28 by marvin           ###   ########.fr       */
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

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (8);
	return (0);
}

int	main(void)
{
	int	i;

	i = 0;
	printf("Nº\t\t--\tCHAR\t\t--\tOWN-FUNC\t--\tSYS_FUNC\n");
	printf("----------------------------------------------------------------\n");
	while (i <= 127)
	{
		if (isspace(i))
		{
			printf("%i\t\t--\t%c\t\t--\t%i\t\t--\t%i\n", i, i, ft_isspace(i), isspace(i));
		}
		i++;
	}
	return (0);
}
