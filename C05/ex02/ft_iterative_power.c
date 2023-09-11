/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:02:35 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 11:44:03 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (power > 1)
	{
		nb = num * nb;
		power--;
	}
	return (nb);
}
/*int main()
{
	int nb = ft_iterative_power(-5, 3);
	printf("%d", nb);

}*/
