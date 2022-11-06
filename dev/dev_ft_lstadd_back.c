
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
// For MAC int_max
# include <limits.h>
// For Linux int_max
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int iTest = 1;

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

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = lst;
	if (!lst)
		return (NULL);
	while (last_node->next != 0)
	{
		last_node = last_node->next;
	}
	return (last_node);
}

void check(int succes)
{
	if (succes)
		printf("OK\n");
	else
		printf("KO\n");
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}

int main(void)
{
	printf("ft_lstadd_back\n\n: ");

	t_list * l =  NULL; 
	t_list * l2 =  NULL; 
	
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	/* 1 */ check(l->content == (void*)1);
	/* 2 */ check(l->next == 0);

	ft_lstadd_back(&l, ft_lstnew((void*)2));
	/* 3 */ check(l->content == (void*)1);
	/* 4 */ check(l->next->content == (void*)2);
	/* 5 */ check(l->next->next == 0);

	ft_lstadd_back(&l2, ft_lstnew((void*)3));
	ft_lstadd_back(&l2, ft_lstnew((void*)4));
	ft_lstadd_back(&l, l2);
	/* 6 */ check(l->content == (void*)1);
	/* 7 */ check(l->next->content == (void*)2);
	/* 8 */ check(l->next->next->content == (void*)3);
	/* 9 */ check(l->next->next->next->content == (void*)4);
	/* 10 */  check(l->next->next->next->next == 0);
    /*while (l->next != 0)
    {
        printf("1 -- %s", l->content);
    }*/
	write(1, "\n", 1);
	return (0);
}