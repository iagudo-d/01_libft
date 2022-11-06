/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:13:36 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/15 02:21:23 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
//#include <stdint.h>
#include <limits.h>

#define MAX_LONG  9223372036854775807
//#define INT_MIN  -2147483647

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (8);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

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

int	main(void)
{
	char			*str;
	long long int	res;

	str = "999999999999999999999999999";
	res = 0;
	res = ft_atoi(str);
	printf("Hola mundo\n");
	printf("%i", res);
	return (0);
}

int	main(void)
{
	printf("The number of bits in a byte %d\n", CHAR_BIT);
	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
	printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
	printf("The minimum value of INT = %d\n", INT_MIN);
	printf("The maximum value of INT = %d\n", INT_MAX);
	printf("The minimum value of CHAR = %d\n", CHAR_MIN);
	printf("The maximum value of CHAR = %d\n", CHAR_MAX);
	printf("The minimum value of LONG = %ld\n", LLONG_MIN);
	printf("The maximum value of LONG = %ld\n", LLONG_MAX);
	printf("The maximum value of LONG = %zu\n", sizeof(size_t));
	return (0);
}
