/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <jbayona-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:30:02 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 22:03:57 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	modulo;

	division = a / b;
	*div = division;
	modulo = a % b;
	*mod = modulo;
}	
/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("La división es igual : %d y el mod es igual a: %d\n", div, mod);
	return (0);
}*/
