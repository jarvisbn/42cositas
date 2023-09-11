/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:25:54 by jbayona-          #+#    #+#             */
/*   Updated: 2023/08/16 22:15:12 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		temp = tab[i];
		tab[i] = tab[f];
		tab[f] = temp;
		i++;
		f--;
	}
}
/*int	main()
{
	int tab[] = {1, 2, 3 ,2};
	int size = 4;
	int i = 0;

	ft_rev_int_tab(tab, size);
	while( i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
