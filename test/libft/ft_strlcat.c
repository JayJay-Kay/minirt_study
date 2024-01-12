/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:31:15 by jungjkim          #+#    #+#             */
/*   Updated: 2023/07/09 20:26:08 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	j = 0;
	k = ft_strlen(src);
	l = ft_strlen(dst);
	if (dstsize < l)
		l = dstsize;
	if (dstsize > l)
	{
		while (dst[j] != '\0')
			j++;
		while (src[i] != '\0' && j < dstsize -1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (k + l);
}
