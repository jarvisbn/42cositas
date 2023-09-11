/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 02:34:35 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/28 13:24:47 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
