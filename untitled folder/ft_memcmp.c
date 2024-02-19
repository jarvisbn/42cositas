/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:25:53 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/09 19:13:28 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	int					sol;
	size_t				i;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			sol = (int)(p1[i] - p2[i]);
			return (sol);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	unsigned char buffer[] = {};
	unsigned char buffer1[] = {};
	int sol1 = ft_memcmp(buffer, buffer1, sizeof(buffer1));
	int sol2 = memcmp(buffer, buffer1, sizeof(buffer1));
	printf("%d\n", sol1);
	printf("%d\n", sol2);
}*/
