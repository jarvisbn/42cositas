/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <jbayona-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:49:13 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/20 11:44:09 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a < '9')
	{
			b = a + 1;
		while (b < '9')
		{
				c = b + 1;
			while (c <= '9')
			{	
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < '7')
					write(1, ", ", 2);
				c++;
			}
				b++;
		}
		a++;
	}
}
