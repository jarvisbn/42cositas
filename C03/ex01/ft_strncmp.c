/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:49:51 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/28 19:31:11 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int  main()
{
	char	*s1 = "hola";
	char	*s2 = "holas";
	char *ss1 = "hola";
	char *ss2 = "holas";	
	int	n = 5 ;
	int sol = ft_strncmp(s1, s2, n);
	int sol1 = strncmp(ss1, ss2, n);
	printf("%d\n", sol);
	printf("%d", sol1);
}*/
