/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:29:31 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:13:26 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*save;

	save = NULL;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (len + 1 > 0)
	{
		if (*(s + len) == (unsigned char)c)
		{
			save = (char *)(s + len);
			return (save);
		}
		len--;
	}
	return (0);
}
