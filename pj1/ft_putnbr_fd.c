/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:54:12 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/30 20:34:05 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	ft_putnbr_fd((n / 10), fd);
	ft_putnbr_fd((n % 10), fd);
	return ;
}
/*int main(void)
{
	ft_putnbr_fd(-5, 2);
}*/
