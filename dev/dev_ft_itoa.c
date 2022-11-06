/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:14:42 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/14 01:14:43 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		((unsigned char *)s)[index++] = c;
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_spc;

	ptr = NULL;
	total_spc = nmemb * size;
	if (nmemb >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(total_spc);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_spc);
	return (ptr);
}

static int	ft_calc_size_number(long nb)
{
	int	size;

	size = 0;
	if (nb < 0)
		size++;
	while (1)
	{
		nb = nb / 10;
		size++;
		if (nb == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	number;
	int		nb_len;
	char	*res;

	number = n;
	nb_len = ft_calc_size_number(n);
	res = ft_calloc(nb_len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (number < 0)
	{
		res[0] = '-';
		number *= -1;
	}
	res[nb_len] = '\0';
	if (number == 0)
		res[nb_len - 1] = '0';
	while (number != 0)
	{
		res[nb_len - 1] = (number % 10) + '0';
		number = number / 10;
		nb_len--;
	}
	return (res);
}
