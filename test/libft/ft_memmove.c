/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:25:50 by jungjkim          #+#    #+#             */
/*   Updated: 2023/07/09 20:25:21 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tempsrc;
	unsigned char	*tempdst;

	if (dst == NULL && src == NULL)
		return (NULL);
	tempsrc = (unsigned char *)src;
	tempdst = (unsigned char *)dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (src < dst)
		while (len-- > 0)
			tempdst[len] = tempsrc[len];
	return (dst);
}
