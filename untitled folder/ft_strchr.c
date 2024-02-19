/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:34:11 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/30 18:51:10 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (0);
}
/*int main() {
    const char *str = "Hello, World!";
    char *ptr = ft_strchr(str, 'z');
	char *ptr1 = strchr(str, 'z');

   	printf("%s\n", ptr1);
	printf("%s", ptr);

}*/
