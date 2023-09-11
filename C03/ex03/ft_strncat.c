/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:06:53 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/28 13:09:28 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main()
{
	char s1[20] = "hello, ";
	char ss1[20] = "hello, ";
	char s2[] = "world";
	char ss2[] = "world";
	unsigned int nb = 6;
	ft_strncat(s1, s2, nb);
	strncat(ss1, ss2, nb);
	printf("%s\n", s1);
	printf("%s\n", ss1);
}*/
