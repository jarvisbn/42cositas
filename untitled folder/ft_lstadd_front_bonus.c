/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:41:35 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 19:50:44 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main() {
    // Creo los nodos que voy a usar
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    // Creo una lista a la que voy añadir los nodos
    t_list *lista = NULL;
    ft_lstadd_front(&lista, node3);
    ft_lstadd_front(&lista, node2);
    ft_lstadd_front(&lista, node1);

    // Muestro la lista con un bucle
    printf("Nueva lista:\n");
    t_list *current = lista;
    while (current != NULL) {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    return 0;
}*/
