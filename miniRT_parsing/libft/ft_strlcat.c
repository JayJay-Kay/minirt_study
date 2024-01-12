/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:31:15 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/21 12:31:19 by jungjkim         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char test1[20] = "derp", t1[20] = "derp";
    char test2[15] = "addingstuff", t2[15] = "addingstuff";

    printf("%lu\n", ft_strlcat(test1, test2, 9));
	printf("%s", test1);
	printf("\n%lu\n", strlcat(t1, t2, 9));
	printf("%s", t1);
}
*/
