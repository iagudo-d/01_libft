/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:28:27 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:11:56 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (!s)
		return ;
	while (s[index] != '\0')
	{
		(*f)(index, &s[index]);
		index++;
	}
	s[index] = '\0';
}
