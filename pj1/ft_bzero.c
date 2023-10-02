/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:57:06 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/25 17:51:34 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	
	str = (char *)s;
	while (n--)
		*str++ = 0;
}

/*int main()
{
	char str[10];
	char array[10];

	ft_bzero(str, 10);
	printf("%s\n", str);
	bzero(array, 10);
	printf("%s\n", array);
}*/
