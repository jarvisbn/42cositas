/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:44:41 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_split.c
/*   Updated: 2023/11/20 14:03:02 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/24 20:59:55 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_split.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*cpy_to_c(const char *s1, int start, int end)
{
	int		i;
	char	*sub;

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

void	to_free(char **sol, size_t k, size_t j)
<<<<<<< HEAD:untitled folder/ft_split.c
{
	while (k < j)
	{
		free(sol[k]);
		k++;
	}
	free(sol);
}

char	**split_cpy(const char *s, char **sol, char c, size_t i)
{
	int		start;
	int		j;
=======
{
	while (k < j)
	{
		free(sol[k]);
		k++;
	}
	free(sol);
}

char	**split_cpy(const char *s, char **sol, char c)
{
	size_t	i;
	size_t	j;
	int		start;
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_split.c

	j = 0;
<<<<<<< HEAD:untitled folder/ft_split.c
=======
	start = -1;
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_split.c
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			sol[j] = cpy_to_c(s, start, i);
			if (!sol[j])
<<<<<<< HEAD:untitled folder/ft_split.c
			{
				to_free(sol, 0, j);
				return (NULL);
			}
=======
				to_free(sol, 0, j);
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_split.c
			j++;
			start = -1;
		}
	}
	sol[j] = NULL;
	return (sol);
}

char	**ft_split(const char *s, char c)
{
	char	**sol;

	if (!s)
		return (0);
	sol = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!sol)
		return (0);
<<<<<<< HEAD:untitled folder/ft_split.c
	sol = split_cpy(s, sol, c, 0);
	if (!sol)
		return (NULL);
=======
	sol = split_cpy(s, sol, c);
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_split.c
	return (sol);
}
/*int main() 
{
	int i = 0;
	int j = 0;
	char c = ' ';
	char *s = "hola";
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
}*/
