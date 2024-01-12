/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:13:31 by jungjkim          #+#    #+#             */
/*   Updated: 2023/06/22 17:44:41 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++i] != '\0')
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*
#include "libft.h"
#include <stdio.h>

char uppercase(unsigned int i, char c)
{
    return ft_toupper(c);
}

int main()
{
    char s[] = "hello, world!";
    char *new_str = ft_strmapi(s, &uppercase);
    printf("%s\n", new_str);
    return 0;
}
*/
