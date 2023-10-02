/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:25:05 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/02 20:15:55 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	count_word(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		   count++;
		i++;	
	}
	return (count);
}

char    *cpy_to_c(const char *s1, int start, int end)
{
	char *sub;
	int i;

	i = 0;
	sub = malloc((end - start + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (start < end)
	{
		sub[i] = s1[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char 	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	int start;
	char **sol;

	i = 0;
	j = 0;
	k = 0;
	start = -1;
	if (!s || !(sol=malloc((count_word(s, c) + 1) * sizeof(char *))))
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			sol[j] = cpy_to_c(s, start, i);
			if (!sol[j])
			{
				while (k++ < j)
				{
					free(sol[k]);
					k++;
				}
			   free(sol);
			   return (0);
			}
			j++;
			start = -1;
		}
		i++;
	}
	sol[j] = 0;
	return (sol);
}

int main() 
{
	int i = 0;
	int j = 0;
	char c = ' ';
	char *s = "hola q tal";
	char **split = ft_split(s, c);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		i++;
	}
	i = 0;
    while (split[i] != NULL) {
        free(split[i]);
        i++;
    }
    free(split);

    return 0;
}
 
