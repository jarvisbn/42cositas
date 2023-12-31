/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:34 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/29 18:56:04 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sol;
	int		size1;
	int		size2;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	sol = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!sol)
		return (0);
	while (i++ <= size1)
	{
		sol[i] = s1[i];
	}
	i = -1;
	while (i++ <= size2)
	{
		sol[size1] = s2[i];
		size1++;
	}
	sol[size1] = '\0';
	return (sol);
}
/*int main()
{
	char *s1 = "hola";
	char *s2 = "quetalllall";
	char *sol = ft_strjoin(s1, s2);
	printf("%s", sol);

}*/
