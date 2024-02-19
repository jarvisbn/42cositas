/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:06:39 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/08 13:16:17 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		c = 0;
	return (c);
}

/*int main()
{
	int c = ft_isprint('~');
	printf("%d", c);
}*/