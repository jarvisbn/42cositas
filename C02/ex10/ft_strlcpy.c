/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:23:05 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/23 20:20:04 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
		j++;
	return (j);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*int main()
{
    char src[] = "Hello, world!";
    char dest[15];

    unsigned int copied_len = ft_strlcpy(dest, src, 0);

    printf("Source: %s\n", src);
    printf("Copied to dest: %s\n", dest);
    printf("Length of copied content: %u\n", copied_len);
	unsigned int copied_len1 = strlcpy(dest, src, 0);

    printf("Source: %s\n", src);
    printf("Copied to dest: %s\n", dest);
    printf("Length of copied content: %u\n", copied_len1);

    return 0;
}*/
