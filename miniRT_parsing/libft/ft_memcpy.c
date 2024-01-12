/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:25:06 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 10:40:10 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

//when both dst and src is null, result should be null, 
//when dst, is null, should be seg fault (no memory to access)
//when src is null, shits messy (no memory to access)

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello World!";
    char dst[42] = "libft jolla many functions";
    char dst2[42] = "libft jolla many functions";

    printf("Source: %s\n", src);
    printf("ft_memcpy1: %s\n", ft_memcpy(dst, src, 3));
    printf("memcpy1: %s\n", memcpy(dst2, src, 3));
    printf("ft_memcpy2: %s\n", ft_memcpy(((void *)NULL), ((void *)NULL), 3));
    printf("memcpy2: %s\n", memcpy(((void *)NULL), ((void *)NULL), 3));
}
*/
