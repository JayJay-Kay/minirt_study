/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:29:00 by jungjkim          #+#    #+#             */
/*   Updated: 2023/03/20 13:29:51 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[42] = "Hello World!";
    char str2[42] = "Hello World!";
    printf("Before memset: %s\n", str);

    ft_memset(str2 + 7, '*', 5);
    printf("After ft_memset: %s\n", str2);

    memset(str + 7, '*', 5);
    printf("After memset: %s\n", str);

    return (0);
}
*/
