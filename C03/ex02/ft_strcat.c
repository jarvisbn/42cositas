/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:55:30 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/28 12:31:35 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
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
	char str1[20] = "hello, ";
	char str2[] = "world";
	char str3[20] = "hello, ";
	char str4[] = "world";
	ft_strcat(str1, str2);
	printf("%s\n", str1);
	strcat(str3, str4);
	printf("%s", str3);
}*/
