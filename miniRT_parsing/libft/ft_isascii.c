/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:22:44 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/02 09:26:36 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (0 <= i && i <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int main()
{
	printf("%i", ft_isascii('*'));
	printf("\n%i", ft_isascii(128));
}
*/
