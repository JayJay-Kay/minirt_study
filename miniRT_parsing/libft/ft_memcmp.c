/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:25 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 12:15:14 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char *str1 = "Hello,\0 World!";
	const char *str2 = "Hello,\0 42orld!";

	printf("%i", ft_memcmp(str1, str2, 10));
	printf("\n%i", memcmp(str1, str2, 10));
}
*/
