/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:57 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/30 20:31:08 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkin(char s1, char const *s2)
{
	while (*s2)
	{
		if (*s2 == s1)
			return (1);
		s2++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;
	char	*sol;

	if (!s1 || !set)
		return (0);
	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] && checkin(s1[i], set))
		i++;
	while (end > i && checkin(s1[end - 1], set) == 1)
		end--;
	sol = malloc(sizeof(char) * (end - i + 1));
	if (!sol)
		return (0);
	while (i < end)
	{
		sol[start] = s1[i];
		start++;
		i++;
	}
	sol[start] = '\0';
	return (sol);
}
/*int main()
{
	char *s1 = "";
	char *set = "";
	char *sol = ft_strtrim(s1, set);
	printf("%s", sol);
}*/
