/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:35:13 by jungjkim          #+#    #+#             */
/*   Updated: 2023/07/09 20:26:40 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	bgn;
	size_t	end;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	bgn = 0;
	end = ft_strlen(s1);
	str = 0;
	if (s1 != NULL && set != NULL)
	{
		while (s1[bgn] != '\0' && ft_strchr(set, s1[bgn]) != NULL)
			bgn++;
		while (end > bgn && s1[end - 1] != '\0' && ft_strchr(set, s1[end - 1]))
			end--;
		str = (char *)malloc(sizeof(char) * (end - bgn + 1));
		if (str == NULL)
			return (NULL);
		if (str != NULL)
			ft_strlcpy(str, s1 + bgn, end - bgn + 1);
	}
	return (str);
}
