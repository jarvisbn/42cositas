/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:31:50 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 19:22:41 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sol;

	sol = 1;
	if (nb > 0)
	{
		while (sol * sol <= nb)
		{
			if (sol * sol == nb)
				return (sol);
			else if (sol >= 46341)
				return (0);
			sol ++;
		}
	}
	return (0);
}
/*int main()
{
	int sol = ft_sqrt(121);
	printf("%d", sol);
}*/
