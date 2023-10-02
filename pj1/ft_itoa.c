/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:44:12 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/02 21:22:38 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isnegative(int nb)
{
	int c;
	c = 0;
	if (nb < 0)
		c = 1;
	return (c);
}
int digits(int nb)
{
	int dg;

	dg = 0;
	while (nb)
	{
		dg++;
		nb = nb / 10;
	}
	return (dg);

}
char *ft_itoa(int nb)
{
	int dg;
	char *str;

	if (isnegative(nb) == 1)
		nb = -nb; 
	dg = digits(nb);
	if (!(str= malloc((dg + isnegative(nb) + 1) * sizeof(char))))
		return (0);
	str[dg + isnegative(nb)] = '\0';
	dg--;
	if (nb == 0)
		str[0] = '0';
	else
	{
		while (dg >= 0)
		{
			str[dg + isnegative(nb)] = nb % 10 + '0';
			nb /= 10;
			dg--;
		}
	}
	if (isnegative(nb) == 1)
		str[0] = '-';
	return (str);
}

int main()
{
	int nb = 0;
	char *str = ft_itoa(nb);
	printf("%s", str);
}
