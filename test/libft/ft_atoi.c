/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:51:53 by jungjkim          #+#    #+#             */
/*   Updated: 2023/07/09 20:24:06 by jungjkim         ###   ########.fr       */
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
