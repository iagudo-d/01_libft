//#include "libft_h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *destino;
	const char *origen;
	int	i;

	destino = dst;
	origen = src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n > 0)
	{
		((unsigned char *)destino)[i] = ((unsigned char *)origen)[i];
		n--;
		i++;
	}
	destino[i] = '\0';
	return (destino);
}

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

static int	ft_split_word_counter(const char *s, char c)
{
	int	contador;
	int	word_size;

	contador = 0;
	word_size = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s != '\0')
			{
				word_size++;
				s++;
			}
			word_size = 0;
			contador++;
		}
	}
	return (contador);
}

static char	**free_mat(char **matriz, int mat_index)
{
	while (mat_index > 0)
	{
		mat_index--;
		free((void *)matriz[mat_index]);
	}
	free(matriz);
	return (NULL);
}

static void	ft_fill_matriz(const char *s, char c, char **matriz, int mat_size)
{
	int		matriz_index;
	int		word_size;

	matriz_index = 0;
	word_size = 0;
	while (matriz_index < mat_size && *s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s != '\0')
			{
				word_size++;
				s++;
			}
			matriz[matriz_index] = ft_calloc(word_size + 1, sizeof(char));
			if (!matriz[matriz_index])
				free_mat(matriz, matriz_index);
			ft_memcpy(matriz[matriz_index], s - word_size, word_size);
			word_size = 0;
			matriz_index++;
		}
		s++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**matriz;
	int		word_number;

	if (!s)
		return (NULL);
	word_number = ft_split_word_counter(s, c);
	matriz = ft_calloc(word_number + 1, sizeof(char *));
	if (!matriz)
		return (NULL);
	ft_fill_matriz(s, c, matriz, word_number);
	return (matriz);
}

int main(void)
{
	char **mat;
    char *str;
    char c;
	int item_count;

    str ="lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    c = ' ';
	item_count = ft_split_word_counter(str, c);
	printf("Empieza el juego\n");
	printf("%i\n", item_count);
	mat = ft_split(str, c);
	while (*mat)
	{
		printf("%s\n", *mat);
        mat++;
	}
    return (0);
}