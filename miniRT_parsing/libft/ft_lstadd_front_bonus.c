/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:59:22 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/26 11:41:24 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// void	print_list(t_list *lst) {
// 	while (lst != NULL) {
// 		printf("%s\n", (char*)lst->content);
// 		lst = lst->next;
// 	}
// }

// int	main() {
// 	// Initialize an empty list
// 	t_list *lst = NULL;

// 	// Create new nodes
// 	t_list *new_node1 = ft_lstnew("Hello");
// 	t_list *new_node2 = ft_lstnew("World");

// 	// Add the new nodes to the front of the list
// 	ft_lstadd_front(&lst, new_node1);
// 	ft_lstadd_front(&lst, new_node2);

// 	// Print the list
// 	print_list(lst);

// 	return 0;
// }