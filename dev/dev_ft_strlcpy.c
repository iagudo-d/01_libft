/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:27 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/14 00:47:39 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
//#include <unistd.h>
#define MAXPATHNAME 15

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize != 0)
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	*ptr_src;
	char	*ptr_dst;
	char	*str_src;
	char	str_dst[MAXPATHNAME];

	ptr_dst = str_dst;
	ptr_src = "String de origen que va a ser copiado";
	printf("\n");
	printf("\tEl string de origen tiene %i caracteres\n\n", ft_strlen(ptr_src));
	printf("\tEl string de origen es: %s\n", ptr_src);
	printf("\tEl string de destino es: %s\n\n", ptr_dst);
	ft_strlcpy(ptr_dst, ptr_src, MAXPATHNAME);
	printf("\tEl string de origen es: %s\n", ptr_src);
	printf("\tEl string de destino es: %s\n\n", ptr_dst);
	printf("\tResultado de la funcion: %i\n\n", ft_strlcpy(ptr_dst, ptr_src, MAXPATHNAME));
	if (MAXPATHNAME <= ft_strlcpy(ptr_dst, ptr_src, MAXPATHNAME))
		printf("El string se ha truncado");
	else
		printf("El strin se ha copiado completo y terminado nulo");
	return (0);
}
