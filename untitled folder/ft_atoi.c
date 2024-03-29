/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:16:05 by jbayona-          #+#    #+#             */
<<<<<<< HEAD:untitled folder/ft_atoi.c
/*   Updated: 2023/11/23 19:20:19 by jbayona-         ###   ########.fr       */
=======
/*   Updated: 2023/10/09 20:35:34 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:pj1/ft_atoi.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 0;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign++;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (sign != 0)
		num = -num;
	return (num);
}
/*int main()
{
	char *str1 = "+214748";
	int num = ft_atoi(str1);
	int num1 = atoi(str1);
	printf("%d\n", num);
	printf("%d", num1);
}*/
