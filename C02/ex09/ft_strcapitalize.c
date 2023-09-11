/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:35:58 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/25 13:18:23 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (f == 1)
			{
				str[i] -= 32;
				f = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			f = 0;
		else
			f = 1;
		i++;
	}
	return (str);
}
int main(int argc, char *argv[])
{
	char *dest = ft_strcapitalize(argv[1]);
	printf("%s\n", dest);
}
