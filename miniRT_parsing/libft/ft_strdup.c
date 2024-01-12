/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:33:00 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/05 15:24:23 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		j;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) +1));
	if (dest == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
	printf("%s\n", ft_strdup("derp"));
	printf("%s", strdup("derp"));
}
*/
