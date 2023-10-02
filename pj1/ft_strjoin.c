/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:34 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/28 19:13:07 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *sol;
	size_t	size1;
	size_t	size2;
	size_t i;

	i = 0;
	if (!(*s1))
		return ((char *)s2);
	if (!(*s2))
		return ((char *)s1);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (!(sol = malloc(sizeof(char) * (size1 + size2 + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		sol[i] = s1[i];
		i++;
	}
	ft_strlcat(sol, (char *)s2, (unsigned int)(size1 + size2 + 1));
	return (sol);
}

int main()
{
	char *s1 = "hola";
	char *s2 = "";
	char *sol = ft_strjoin(s1, s2);
	printf("%s", sol);

}
