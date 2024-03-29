/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:50:55 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_strlcat.c
/*   Updated: 2023/11/14 19:11:01 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/29 18:34:23 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strlcat.c
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[r])
		r++;
	if (size <= i)
		r += size;
	else
		r += i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}
/*int main ()
{
	char s1[] = "hello, ";
	char ss1[] = "hello, ";
	char ss2[] = "world";
	char s2[] = "world";
	unsigned int size = 0;
	unsigned int a = ft_strlcat(s1, s2, size);
	unsigned int b = strlcat(ss1, ss2, size);
	printf("%d\n", a);
	printf("%d\n", b);

}*/
