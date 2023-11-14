/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:47:09 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/30 18:52:22 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < n && haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i < n - j)
			{
				if (needle[j + 1] == '\0')
					return ((char *) &haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*int main ()
{
	char  *str = "see FF your FF return FF now FF";
	char *find = "FF";
	char *found = ft_strnstr(str, find, strlen(str));
	char *found1 = strnstr(str,find, strlen(str));
	printf("%s\n", found);
	printf("%s\n", found1);
}*/
