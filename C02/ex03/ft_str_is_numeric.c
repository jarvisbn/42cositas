/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:42:57 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/22 15:51:48 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	i++;
	}
	return (1);
}
/*int main()
{
	 char str[] = "27a72";
	 int count = ft_str_is_numeric(str);
	 printf("%d", count);
}*/
