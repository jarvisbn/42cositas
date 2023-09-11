/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:33:36 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 11:53:18 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
/*int main()
{
	int nb = ft_fibonacci(0);
	printf("%d", nb);
	 nb = ft_fibonacci(1);
	printf("%d", nb);
   	nb = ft_fibonacci(2);
	printf("%d", nb);
	nb = ft_fibonacci(3);
	printf("%d", nb);
	nb = ft_fibonacci(4);
	printf("%d", nb);
}*/
