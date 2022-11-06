/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:41:37 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:11:46 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	spc_req;
	char	*duplicate;

	spc_req = ft_strlen(s1);
	duplicate = ft_calloc(spc_req + 1, sizeof(char));
	if (duplicate)
	{
		ft_memcpy(duplicate, s1, spc_req);
		duplicate[spc_req] = '\0';
	}
	else
		return (NULL);
	return (duplicate);
}
