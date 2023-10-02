/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:55:22 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/25 21:07:17 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s  + start) < len)
		len = ft_strlen(s + start);
	if (!(sub = malloc(sizeof(char) * len + 1)))
		return (0);
	ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}

int main()
{
	char *str = "Hola mundo";
	char *sub = ft_substr(str, 4, 5);
	printf("%s", sub);
}
