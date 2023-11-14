/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:46:22 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/09 19:12:09 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	to_if(char *d1, const char *s1, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		d1[i - 1] = s1[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d1;
	const char	*s1;
	size_t		i;

	d1 = (char *)dest;
	s1 = (const char *)src;
	if (d1 == s1)
		return (dest);
	if (s1 < d1 && s1 + len > d1)
	{
		to_if(d1, s1, len);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	return (dest);
}
/*int main()
{
	char	str[] = "Hola mundo";
	char 	dest[20];
	ft_memmove(dest, str, 20);
	printf("%s\n", str);
}*/
