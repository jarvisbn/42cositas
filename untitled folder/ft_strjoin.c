/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:34 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_strjoin.c
/*   Updated: 2023/11/16 18:03:12 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/29 18:56:04 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strjoin.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sol;
	int		size1;
	int		size2;
<<<<<<< HEAD:untitled folder/ft_strjoin.c

	if (!s1 || !s2)
		return (NULL);
=======
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (0);
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strjoin.c
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	sol = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!sol)
<<<<<<< HEAD:untitled folder/ft_strjoin.c
		return (NULL);
	ft_strlcpy(sol, (char *)s1, size1 + 1);
	ft_strlcat(sol, (char *)s2, ft_strlen(sol) + size2 + 1);
=======
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
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strjoin.c
	return (sol);
}
/*int main()
{
	char *s1 = "hola";
	char *s2 = "quetalllall";
	char *sol = ft_strjoin(s1, s2);
	printf("%s", sol);

}*/
