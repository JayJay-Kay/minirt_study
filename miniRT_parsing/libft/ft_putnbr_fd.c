/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:41:03 by jungjkim          #+#    #+#             */
/*   Updated: 2023/04/03 13:30:10 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(1, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-510, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(1, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(10, 2);
	return (0);
}
*/
