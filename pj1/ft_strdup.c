/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:56:19 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/29 17:19:07 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sol;
	size_t	size;
	size_t	n;

	size = 0;
	while (s1[size])
		size++;
	sol = malloc(sizeof(char) * (size + 1));
	if (!sol)
		return (0);
	n = 0;
	while (s1[n])
	{
		sol[n] = s1[n];
		n++;
	}
	sol[n] = '\0';
	return (sol);
}
/*int main()
{
    const char *original_string = "Hello, world!";

    char *custom_copy = ft_strdup(original_string);

    char *stdlib_copy = strdup(original_string);

    if (strcmp(custom_copy, stdlib_copy) == 0) {
        printf("Ambas funciones strdup devolvieron resultados idénticos.\n");
    } else {
        printf("Las funciones strdup no devolvieron resultados idénticos.\n");
    }

    free(custom_copy);
    free(stdlib_copy);

    return 0;
}*/
