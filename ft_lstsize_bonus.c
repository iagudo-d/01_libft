/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:45:20 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:06:21 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	index;

	index = 0;
	if (!lst)
		return (index);
	index = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		index++;
	}
	return (index);
}
