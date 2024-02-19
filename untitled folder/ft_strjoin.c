/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:34 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 18:03:12 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sol;
	int		size1;
	int		size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	sol = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!sol)
		return (NULL);
	ft_strlcpy(sol, (char *)s1, size1 + 1);
	ft_strlcat(sol, (char *)s2, ft_strlen(sol) + size2 + 1);
	return (sol);
}
/*int main()
{
	char *s1 = "hola";
	char *s2 = "quetalllall";
	char *sol = ft_strjoin(s1, s2);
	printf("%s", sol);

}*/
