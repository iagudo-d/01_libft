/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:19:38 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/29 03:08:07 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_mat(char **matriz, int mat_index)
{
	while (mat_index > 0)
	{
		free((void *)matriz[mat_index]);
		mat_index--;
	}
	free(matriz);
	return (NULL);
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
