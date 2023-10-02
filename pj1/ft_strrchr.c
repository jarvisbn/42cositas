/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:04:07 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/24 15:24:10 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char *sol;

	sol = 0;
	while (*s)
	{
		if (*s == c)
			str = s;
		s++;
	}
	if (c == 0)
	{
		sol = (char *)s;
		return (sol);
	}
	if (*str == c)
		sol = (char *)str;
	return (sol);
}

int main()
{
	const char *str = "Hello, World!";
	char *ptr1 = ft_strrchr(str,'l');
    char *ptr = strrchr(str, 'l');


	printf("%s\n", ptr);
	printf("%s", ptr1);
}
