/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:57 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/28 21:06:23 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checkit(char s1, char const *s2)
{
	while (*s2)
	{
		if(s1 == *s2)
			return (1);
		s2++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t end;
	size_t len;
	size_t start;
	char *sol;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	if (!(*s1))
		return (0);
	while (s1[i] && checkit(s1[i], set) == 1)
		i++;
	while (end > i && checkit(s1[end], set) == 1)
		end--;
	len = end - i;
	if (!(sol = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		sol[start] = s1[i];
		start++;
		i++;
	}
	sol[start] = '\0';
	return (sol);
}

int main()
{
	char *s1 = "xxxxxx";
	char *set = "";
	char *sol = ft_strtrim(s1, set);
	printf("%s", sol);
}
