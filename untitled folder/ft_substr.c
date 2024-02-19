/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:55:22 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_substr.c
/*   Updated: 2023/11/16 18:40:02 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/29 18:06:43 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_substr.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}

/*int main()
{
	char *str = "Hola mundo";
	char *sub = ft_substr(str, 4, 5);
	printf("%s", sub);
}*/
