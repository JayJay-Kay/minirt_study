/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:16:48 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/22 17:50:07 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

//use strdup to properly malloc 1 byte for the "" a.k.a "\0"

/*
#include <stdio.h>

int main()
{
    char str[] = "Hello, world!";
    printf("%s\n", ft_substr(NULL, 20 ,4)); 

    printf("%s\n", ft_substr(str, 7, 3));

    printf("%s\n", ft_substr(str, 0, 12));

    printf("%s\n", ft_substr(str, 0, 4294967295));

    return 0;
}
*/
