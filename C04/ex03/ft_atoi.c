/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:00:25 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/31 15:02:54 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 0;
	num = 0;
	while (str[i] != '\0' && str[i] < '0')
	{	
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
			i++;
	}
	if ((sign % 2) != 0)
		num = -num;
	return (num);
}
int main()
{
	char *str = "+-+\t\n-+-2147483648";
	char *str1 = "-2147483648";
	int num = ft_atoi(str);
	int num1 = atoi(str1);
	printf("%d\n", num);
	printf("%d", num1);
}
