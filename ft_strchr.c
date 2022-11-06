/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:51:50 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:11:35 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(s);
	while (index <= len)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)(s));
		}
		s++;
		index++;
	}
	return (NULL);
}
