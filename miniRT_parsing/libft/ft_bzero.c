/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:34:31 by jungjkim          #+#    #+#             */
/*   Updated: 2023/03/20 15:34:34 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[42] = "Hello World!";
    char str2[42] = "Hello World!";
    printf("Before bzero: %s\n", str);

    ft_bzero(str2 + 7, 5);
    printf("After ft_bzero: %s\n", str2);

    bzero(str + 7, 5);
    printf("After bzero: %s\n", str);

    return (0);
}*/
