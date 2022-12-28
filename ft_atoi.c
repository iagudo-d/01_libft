/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:57:27 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/12/27 21:35:29 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr++ == '-')
			sign *= -1;
	}
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += *nptr - '0';
		nptr++;
	}
	return (result * sign);
}
