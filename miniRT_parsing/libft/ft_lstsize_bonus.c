/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:20:23 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/28 23:56:00 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	if (lst == NULL)
		return (length);
	while (lst != NULL)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

// #include "libft.h"
// #include <stdio.h>

// int main() {
//     t_list *head = ft_lstnew("Hello");
//     ft_lstadd_front(&head, ft_lstnew("World"));
//     ft_lstadd_front(&head, ft_lstnew("Goodbye"));
//     printf("List size: %d\n", ft_lstsize(head)); // output: "List size: 3"
//     return 0;
// }