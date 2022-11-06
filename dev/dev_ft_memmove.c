/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:40:03 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/24 22:57:45 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		delta_src_dst;

	delta_src_dst = (dst - src);
	printf("\tSRC: %i\n\tDST: %i\n\tDELTA: %i\n\n", (int)(src), (int)(dst), (int)(delta_src_dst));
	i = 0;
	if (delta_src_dst < 0)
	{
		printf("A\n");
		printf("%i\n", len);
		while (len > 0)
		{
			printf("%i\n", len);
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
			len--;
		}
	}
	else
	{
		printf("B\n");
		printf("%i\n", len);
		while (len > 0)
		{
			printf("%i\n", len);
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

int	main(void)
{
 
	char	*src;
	char	*dst;
	char	str1[40] = "Hola mi nombre es Ivan";
	char	str2[40] = "Hola mi nombre es Ivan";
	int		i;
	int		index;

	src = str1;
	dst = str2;
	i = 25;
	index = 0;	
	int	memdir_src = (int)(src);
	int	memdir_dst = (int)(dst);
/*
	printf("MEMDIR SRC : %i\n", memdir_src);
	printf("MEMDIR DST : %i\n", memdir_dst);
	printf("SRC : %i\n", src);
	printf("DST : %i\n\n", dst);
*/
	printf("SRC:\t %s\n", src);
	printf("DST:\t %s\n", dst);
	ft_memmove(dst, dst + 5, 10);
	memmove(src, src + 5, 10);
	printf("MEMMOVE:\t %s\n", src);
	printf("FT_MEMM:\t %s\n", dst);
	return 0;
}
