/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:02:07 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/21 17:26:24 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nw_lst;
	t_list	*nw_node;
	void	*nw_content;

	if (!lst || !f)
		return (NULL);
	nw_lst = NULL;
	while (lst != '\0')
	{
		nw_content = f(lst->content);
		nw_node = ft_lstnew(nw_content);
		if (!nw_node)
		{
			ft_lstclear(&nw_lst, del);
			free(nw_content);
			return (NULL);
		}
		ft_lstadd_back(&nw_lst, nw_node);
		lst = lst->next;
	}
	return (nw_lst);
}
