/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:55:01 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/09 18:48:00 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			c1;
	const unsigned char		*p;

	p = s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (*p == c1)
			return ((void *)p);
		p++;
	}
	return (0);
}
/*int main()
{
	unsigned char buffer1[] = {'H', 'k', 'l', 'o', 0, 's'};
	unsigned char buffer[] = {'H', 'k', 'l', 'o', 0, 's'};
	unsigned char c = 'k';
	void *result = ft_memchr(buffer1, c, sizeof(buffer1));
	void *result1 = memchr(buffer, c, sizeof(buffer));
	printf("%c\n", *(unsigned char *)result);
	printf("%c\n", *(unsigned char *)result1);
}*/
