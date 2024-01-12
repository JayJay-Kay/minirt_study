/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:26:45 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 12:20:21 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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

	printf("%i", ft_strncmp(str1, str2, 10));
	printf("\n%i", strncmp(str1, str2, 10));
}
*/
