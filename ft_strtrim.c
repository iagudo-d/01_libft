/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:40:44 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:13:32 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char c, char *set_of_chars)
{
	while (*set_of_chars)
	{
		if (*set_of_chars == c)
			return (1);
		else
			set_of_chars++;
	}
	return (0);
}

static size_t	ft_return_mem(char *str, char *what, size_t len, int dir)
{
	int	current;

	if (dir == 1)
		current = 0;
	else if (dir == -1)
		current = len;
	while (len > 0)
	{
		if (ft_check_char(str[current], what) == 0)
			return (current);
		len--;
		current += dir;
	}
	return (current);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	str_len;
	size_t	init;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	str_len = ft_strlen(s1);
	init = ft_return_mem((char *)s1, (char *)set, str_len, 1);
	end = ft_return_mem((char *)s1, (char *)set, str_len - 1, -1);
	if (end < init)
		return (ft_strdup(""));
	result = ft_calloc(((end + 1) - init) + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1 + init, ((end + 1) - init) + 1);
	result[(end + 1) - init] = '\0';
	return (result);
}
