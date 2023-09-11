/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:42:26 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 22:01:32 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main()
{
	int a1 = 5;
	int b1 = 10;

	printf("Antes del swapeo a = %d, b=%d\n", a1, b1);
	ft_swap(&a1, &b1);
	printf("Después del swapeo a = %d, b=%d\n", a1, b1);

}*/
