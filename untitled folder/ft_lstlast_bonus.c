/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:54:40 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/20 12:01:40 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	//Crea nodos para lista
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    // Crea la lista y agrega los nodos
    t_list *lista = NULL;
    ft_lstadd_front(&lista, node3);
    ft_lstadd_front(&lista, node2);
    ft_lstadd_front(&lista, node1);

    // Imprime la lista, nuestra función debe apuntar al último nodo de la lista
    printf("Lista:\n");
    t_list *current = lista;
    while (current != NULL) {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }

    // Usamos la funcion y mostramos cual es el ultimo nodo
    t_list *last = ft_lstlast(lista);
    if (last != NULL) {
        printf("Último nodo de la lista: %s\n", (char *)last->content);
    } else {
        printf("La lista está vacía.\n");
    }
    return 0;
}*/
