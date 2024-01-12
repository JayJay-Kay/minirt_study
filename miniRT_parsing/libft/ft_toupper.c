/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:57:36 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 09:32:10 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if ('a' <= i && i <= 'z')
		i -= 32;
	return (i);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%i", ft_toupper('j'));
	printf("\n%i", toupper('j'));
}
*/
