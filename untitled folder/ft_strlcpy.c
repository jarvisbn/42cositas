/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:47:34 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_strlcpy.c
/*   Updated: 2023/11/16 18:02:45 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/09 18:12:34 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strlcpy.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, unsigned int size)
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
