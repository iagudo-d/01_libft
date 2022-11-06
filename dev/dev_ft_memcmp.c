/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_memcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:09:26 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/14 01:10:09 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && n - 1 > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "\xff\xaa\xde\x12";
	str2 = "\xff\xaa\xde\x12MACOSAAAAA";
	result = ft_memcmp(str1, str2, 4);
	if (result == 0)
		printf("Los strings son iguales");
	else if (result > 0)
		printf("El string uno es mayor que el dos");
	else
		printf("El string dos es mayor que el uno");
	return (0);
}
