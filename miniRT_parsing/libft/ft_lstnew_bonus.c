/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:33:57 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/28 23:55:44 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>

// int main(void)
// {
//     int data = 42;  // Some arbitrary data.
//     t_list *node = ft_lstnew(&data);  // Create a new list node with data.

//     // Check if the node was created successfully.
//     if (node == NULL) {
//         printf("Failed to allocate memory for the new node.\n");
//         return 1;  // Return an error code.
//     }

//     // Verify that the data in the node is what we expect.
//     if (*(int *)(node->content) != data) {
//         printf("The data in the node is not correct.\n");
//         return 1;  // Return an error code.
//     }

//     // Verify that the next pointer of the node is NULL 
//     if (node->next != NULL) {
//         printf("The next pointer of the node is not NULL.\n");
//         return 1;  // Return an error code.
//     }

//     printf("Node content: %d\n", *(int *)(node->content));
//     printf("The test case passed successfully.\n");

//     // Don't forget to free the memory that was allocated for the node.
//     free(node);

//     return 0;
// }