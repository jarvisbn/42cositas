/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:27:36 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/08 13:12:52 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		c = 0;
	return (c);
}
/*int main()
{
	int c = ft_isalnum('a');
	int a = isalnum('1');
	int h = ft_isalnum(':');
	printf("%d", c);
	printf("%d", h);
	printf("%d", a);
}*/
