/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 23:25:51 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/26 11:43:05 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int main() 
// {
//     t_list *a = ft_lstnew("Hello");
//     t_list *b = ft_lstnew("World");
//     t_list *c = ft_lstnew("!");

//     // Construct the linked list
//     a->next = b;
//     b->next = c;

//     // Find the last element
//     t_list *last = ft_lstlast(a);
//     printf("last element is: %s\n", (char*)last->content);

//     return 0;
// }