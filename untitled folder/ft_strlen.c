/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:14:36 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_strlen.c
/*   Updated: 2023/11/16 17:45:29 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/29 17:27:11 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_strlen.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*int main()
{
	size_t count;
	char *str = "Hola";

	count = ft_strlen(str);
	printf("Tiene %zu caracteres", count);
	return (0);
}*/
