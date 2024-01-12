/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:32:12 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/03 09:04:42 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		f(i, s + i);
}

/*
#include "libft.h"
#include <stdio.h>

void uppercase(unsigned int i, char *c)
{
    *c = ft_toupper(*c);
}

int main()
{
    char s[] = "hello, world!";
    ft_striteri(s, &uppercase);
    printf("%s\n", s);
    return 0;
}
*/
