/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:44:12 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/09 18:16:34 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isnegative(int nb)
{
	int	c;

	c = 0;
	if (nb < 0)
		c = 1;
	return (c);
}

int	digits(int nb)
{
	int	dg;

	dg = 0;
	while (nb)
	{
		dg++;
		nb = nb / 10;
	}
	return (dg);
}

char	*to_str(int dg, int negative, int nb)
{
	char	*str;

	str = malloc((dg + negative + 1) * sizeof(char));
	if (!(str))
		return (0);
	str[dg + negative] = '\0';
	dg--;
	if (negative == 1)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (dg >= 0)
	{
		str[dg + negative] = nb % 10 + '0';
		nb /= 10;
		dg--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int		dg;
	int		ng;
	char	*str;

	if (nb == 0)
	{
		str = malloc(2 * sizeof(char));
		if (!str)
			return (0);
		str[1] = '\0';
		str[0] = '0';
		return (str);
	}
	if (nb == -2147483648)
	{
		str = malloc(12 * sizeof(char));
		if (!str)
			return (0);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	ng = isnegative(nb);
	dg = digits(nb);
	str = to_str(dg, ng, nb);
	return (str);
}
/*int main()
{
	int nb = -2147483648;
	char *str = ft_itoa(nb);
	printf("%s", str);
}*/
