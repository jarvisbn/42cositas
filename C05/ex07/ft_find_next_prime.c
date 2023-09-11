/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:31:13 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 19:31:05 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!(ft_prime(nb)))
		nb++;
	return (nb);
}
/*int main()
{
	int sol = ft_find_next_prime(-5);
	printf("%d", sol);

}*/
