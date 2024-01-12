/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:45:04 by jungjkim          #+#    #+#             */
/*   Updated: 2023/11/10 15:27:49 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char) + 1);
		if (s1 == NULL)
			return (0);
		s1[0] = 0;
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[++j] != '\0')
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

/*
#include<stdio.h>

int main()
{
	char *test_strs1;
	char *test_strs2;

	test_strs1 = "Pis";
	test_strs2 = "Cine";

	printf("%s", ft_strjoin(test_strs1, test_strs2));
}
*/
