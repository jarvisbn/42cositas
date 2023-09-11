/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:03:46 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/23 19:00:48 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[] = "hol_\tli";
	char dest[20] = "15\0a1";
	unsigned int n = 5;

	char src1[] = "hol_\tli";
	char dest1[20] = "15\0a1";
	unsigned int n1 = 5;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);

	strncpy(dest1, src1, n1);
	printf("%s", dest1);
}*/
