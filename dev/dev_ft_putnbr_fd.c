//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <io.h>

#define STD_IN 0
#define STD_OUT 1
#define STD_ERR 2

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

int	main(void)
{
	int	nb;

	nb = 19524;
	ft_putnbr_fd(nb, STD_OUT);
	return (0);
}
