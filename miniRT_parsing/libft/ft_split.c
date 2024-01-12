/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:46:30 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/22 17:45:57 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freeall(char **split_wds)
{
	int	i;

	i = 0;
	while (split_wds[i] != NULL)
	{
		free(split_wds[i]);
		i++;
	}
	free(split_wds);
	return (NULL);
}

int	ft_countword(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split_wds;
	int		i;
	int		j;

	if (s != NULL)
		split_wds = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (s == NULL || split_wds == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			split_wds[j] = ft_substr(s + i, 0, ft_strchr(s + i, c) - (s + i));
			if (split_wds[j++] == NULL)
				return (ft_freeall(split_wds));
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	split_wds[j] = NULL;
	return (split_wds);
}

//dirtyass bottom part finds length by end of current word - start of cur word
//a.k.a (s + i, c) - (s + i)

/*
#include <stdio.h>

int	main(void)
{
	int		i;
	char	**str;

	i = 0;
	str = ft_split(NULL, ',');
	//while (str[i])
	//{
	//	printf("%s\n", str[i]);
	//	i++;
	//} 

        char *s = "      split       this for   me  !       ";
 
        char **result = ft_split(s, ' ');
		while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	} 
	return (0);
}
*/
