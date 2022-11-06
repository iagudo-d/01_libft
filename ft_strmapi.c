/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:27:55 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:12:59 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*result;

	index = 0;
	if (!s)
		return (NULL);
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
