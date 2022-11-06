/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_memchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:11:17 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/14 01:12:04 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	int		letter;
	char	*result;

	str = "El string donde buscar";
	letter = 's';
	result = ft_memchr(str, letter, strlen(str));
	printf("El resultado:\n");
	printf("MEMORIA: %p\n", result);
	printf("CADENA: %s\n", result);
	return (0);
}
