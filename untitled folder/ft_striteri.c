/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:25:37 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/20 12:01:34 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &(s[i]));
		i++;
	}
}
/*void myft(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z') 
        *c = *c - 32;
}

int main()
{
	char str[] = "hola elio";
	ft_striteri(str, myft);
	printf("%s", str);
}*/
