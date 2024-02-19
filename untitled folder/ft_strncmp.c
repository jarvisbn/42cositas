/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:28:56 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 17:38:59 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] -(unsigned char)s2[i]));
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*int main()
{
	char	*s1 = "ho\0la";
	char	*s2 = "holas";
	char *ss1 = "ho\0la";
	char *ss2 = "holas";
	int	n = 5 ;
	int sol = ft_strncmp(s1, s2, n);
	int sol1 = strncmp(ss1, ss2, n);
	printf("%d\n", sol);
	printf("%d", sol1);
}*/
