/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:51:53 by jungjkim          #+#    #+#             */
/*   Updated: 2023/10/28 20:34:21 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	ans;
	int			strtol_chk;

	i = 0;
	sign = 1;
	ans = 0;
	strtol_chk = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + str[i++] - '0';
		if (ans > 0)
			strtol_chk++;
		if (strtol_chk > 19 && sign == 1)
			return (-1);
		else if (strtol_chk > 19 && sign == -1)
			return (0);
	}
	return (ans * sign);
}

//real atoi uses strtol for stupid large & small nbr and returns it as int type
//hence why i changed char to long to in


// #include<stdlib.h>
// #include<stdio.h>

// int main()
// {
//     printf("%i\n", ft_atoi("   +000000000000000000000000000000000000000123abc"));
//     printf("%i\n", atoi("      +000000000000000000000000000000000000000123abc"));

//     printf("%i\n", ft_atoi("-1a"));
//     printf("%i\n", atoi("-1a"));

//     printf("%i\n", ft_atoi("   2147483649977712345abc"));
//     printf("%i\n", atoi("      2147483649977712345abc"));

//     printf("%i\n", ft_atoi("  - 123456789098765432113423451345"));
//     printf("%i", atoi("      -123456789098765432111323512451245"));
// }

