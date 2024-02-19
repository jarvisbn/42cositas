/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:41:14 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 20:22:35 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/*int main() {
    // Creamos los nodos
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");
 	t_list *node4 = ft_lstnew("xd");
    // Agregamos los nodos al final
    t_list *lista = NULL;
    ft_lstadd_back(&lista, node1);
    ft_lstadd_back(&lista, node2);
    ft_lstadd_back(&lista, node3);

    // Mostramos la lista
    printf("Lista:\n");
    t_list *current = lista;
    while (current != NULL) {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
	//probamos a añadir un nodo nuevo
	printf("\n");
	ft_lstadd_back(&lista, node4);
	current = node1;
	while (current != NULL) {
	   	printf("%s -> ", (char *)current->content);
		current = current->next;
	}
}*/
