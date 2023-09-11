/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:05:07 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/28 16:49:02 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*int main ()
{
	char s1[] = "holaaaa";
	char s2[] = "hola";
	int sol = ft_strcmp(s1, s2);
	printf("%d\n", sol);
	int sol1 = strcmp(s1, s2);
	printf("%d", sol1);
}*/
