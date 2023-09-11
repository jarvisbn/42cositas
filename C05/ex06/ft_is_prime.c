/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:15:17 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 19:26:18 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	sol;

	sol = 2;
	if (nb <= 1)
		return (0);
	while ((nb / sol) >= sol)
	{
		if (nb % sol == 0)
			return (0);
		sol += 1;
	}
	return (1);
}
/*int main()
{
	int sol = ft_is_prime(8);
	printf("%d", sol);
}*/
