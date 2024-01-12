/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:44:47 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/05 15:20:04 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, count * size);
	return (ptr);
}

/* when either count or size is 0, allocation works, just zero-length
 * but if ptr is NULL, allocation failed
 */
