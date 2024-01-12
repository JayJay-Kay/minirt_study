/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:03 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 14:21:49 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && haystack [i + j] == needle[j])
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

//exception when both haystack and needle are same (including null terminator)
//haystack and needle
//if needle is null, return haystack
//if needle not found, return null

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char teststr[] = "checking random stuff like this and blah blah";
	char testto_find[] = "and";

	printf("%s", ft_strnstr(teststr, testto_find, 15));
	printf("\n%s", strnstr(teststr, testto_find, 15));
	
	char teststr1[] = "abc";
	char testto_find1[] = "abc";

	printf("\n\n%s", ft_strnstr(teststr1, testto_find1, 4));
	printf("\n%s", strnstr(teststr1, testto_find1, 4));

	char teststr2[] = "abc";
	char testto_find2[] = "xyz";

	printf("\n\n%s", ft_strnstr(teststr2, testto_find2, 1));
	printf("\n%s", strnstr(teststr2, testto_find2, 1));
}
*/
