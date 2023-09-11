/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <jbayona-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:02:49 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 22:06:22 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*int main()
{
	int a;
	int b;
	int *c;
	int *d;

	a = 40;
	b = 15;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
	printf("El puntero a nos da: %d y el b da: %d\n", *c, *d);
}*/
