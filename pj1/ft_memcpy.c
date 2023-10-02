/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:18:35 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/14 19:45:27 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *restrict d;
	const char *restrict s;

	d =	(char *restrict)dst;
	s = (const char *restrict)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

int main()
{
	const char *restrict src = "Hola mundo";
	char dst[20];
	const char *restrict src1 = "Hola mundo";
	char dst1[20];
	
	ft_memcpy(dst, src, 11);
	memcpy(dst1, src1, 11);
	printf("%s\n", dst);
	printf("%s\n", dst1);

}
