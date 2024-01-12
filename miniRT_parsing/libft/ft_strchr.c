/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:39:55 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 11:45:00 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (((char *)s)[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "hello world";
    char *result_libft = ft_strchr(str, '\0');
    char *result_expected = strchr(str, '\0');

    printf("String: %s\n", str);
    printf("Looking for character 'w'\n");
    printf("Result from ft_strchr: %s\n", result_libft);
    printf("Result from strchr: %s\n", result_expected);

    if (result_libft == result_expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");

    return 0;
}
*/
