/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:25:50 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/22 17:57:11 by jungjkim         ###   ########.fr       */
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

/*
 * memcpy vs memmove, Answer: overlapping issue
 * memcpy just copies directly and can lead to overlapping problems
 * memmove uses a temporary buffer to handle overlapping memory regions
*/

/* 
 * I fcked up the example case (memmove result is messed up cause i used memcpy
 * first and changed the original string then used memmove on it)
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Learningisfun";
    char str2[100] = "Learningisfun";

    printf("Original string :%s\n ", str);
      
    // when overlap happens then it just ignore it
	ft_memcpy(str, str, 10);
    printf("memcpy: %s\n ", str);
  
    // when overlap it start from first position
    ft_memmove(str2 + 8, str2, 10);
    printf("memmove: %s\n ", str2);
  
    return 0;
}
*/
