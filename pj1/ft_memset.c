/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:36:11 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/09 19:15:40 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
		*str++ = c;
	return (b);
}
/*int main()
{
	char array[10];

	printf("%s\n", ft_memset(array, '4', 10));
	printf("%s", memset(array, '4', 10));
}*/
