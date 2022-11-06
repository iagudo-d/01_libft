/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:40:03 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:06:40 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		delta_src_dst;

	delta_src_dst = (dst - src);
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (delta_src_dst < 0)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
