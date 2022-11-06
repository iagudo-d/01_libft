/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:37:27 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:13:48 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	src_len;
	size_t	index;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (len > src_len - start)
		len = src_len - start;
	if (start > src_len)
		return (ft_strdup(""));
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	index = 0;
	while (index < len && start + index < src_len)
	{
		substr[index] = s[index + start];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
