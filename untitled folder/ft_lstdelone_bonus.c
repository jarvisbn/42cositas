/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:untitled folder/ft_lstdelone_bonus.c
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:50:56 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 20:51:08 by jbayona-         ###   ########.fr       */
=======
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:35:53 by jbayona-          #+#    #+#             */
/*   Updated: 2023/10/30 18:57:58 by jbayona-         ###   ########.fr       */
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:untitled folder/ft_putchar_fd.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD:untitled folder/ft_lstdelone_bonus.c
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
=======
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
>>>>>>> a597c81aa21364582c6aae1aa487902d9b88e763:untitled folder/ft_putchar_fd.c
}
