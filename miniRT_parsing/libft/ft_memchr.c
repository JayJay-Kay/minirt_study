/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:44:06 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 11:30:57 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "hello world";
    char *result_libft = ft_memchr(str, 'w', 10);
    char *result_expected = memchr(str, 'w', 10);

    printf("String: %s\n", str);
    printf("Looking for character 'w'\n");
    printf("ft_memchr: %s\n", result_libft);
    printf("memchr: %s\n", result_expected);

    if (result_libft == result_expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");

    return 0;
}
*/
