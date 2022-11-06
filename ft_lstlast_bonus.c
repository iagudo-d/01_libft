/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:13:06 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:12:51 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = lst;
	if (!lst)
		return (NULL);
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	return (last_node);
}
