/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <jbayona-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:03:31 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 18:31:26 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_large(void)
{
	write(1, "-2147483648", 11);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write_large();
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr((nb / 10));
	ft_putchar((nb % 10) + '0');
	return ;
}
