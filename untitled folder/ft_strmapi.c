/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:39:31 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/29 17:47:01 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sol;

	i = 0;
	if (!s)
		return (0);
	sol = malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (!sol)
		return (0);
	while (s[i] != '\0')
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
/*char myft(unsigned int i, char str)
{
	(void)i;
	 if (str >= 'a' && str <= 'z') 
		 return (str - 32);
	 return str;
}	

int main()
{
	char str[] = "hola elio";
	char *result = ft_strmapi(str, myft);
	printf("%s", result);
	free(result);
}*/
