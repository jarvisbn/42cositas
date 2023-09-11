/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:40:26 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 22:32:34 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		f = i +1;
		while (f < size)
		{
			if (tab[i] > tab [f])
			{
				temp = tab[i];
				tab[i] = tab[f];
				tab[f] = temp;
			}
			f++;
		}
		i++;
	}
}
/*int main()
{
	int tab[] = {4, 9, 6, 5};
	int size = 4;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
