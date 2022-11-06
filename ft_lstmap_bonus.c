/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <iagudo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:31:43 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/10/28 00:12:48 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	t_list	*tmp;

	list = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	list = lst;
	while (list->next)
	{
		tmp = ft_lstnew(f(list->content));
		if (tmp)
		{
			ft_lstadd_back(&new, tmp);
		}
		else
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		list = list->next;
	}
	ft_lstadd_back(&new, ft_lstnew(f(list->content)));
	return (new);
}
