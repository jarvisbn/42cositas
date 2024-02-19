/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:04:07 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/29 20:01:18 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;

	b = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*int main()
{
	const char *str = "Hello, World!";
	char *ptr1 = ft_strrchr(str,'\0');
    char *ptr = strrchr(str, '\0');


	printf("%s\n", ptr);
	printf("%s", ptr1);
}*/
