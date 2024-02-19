/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:55:39 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/16 19:57:55 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != '\0')
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*int main() {
    // Creamos los nodos de la lista
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    // Crear una lista y agregar nodos
    t_list *lista = NULL;
    ft_lstadd_front(&lista, node3);
    ft_lstadd_front(&lista, node2);
    ft_lstadd_front(&lista, node1);

    // Se crea la lista a la que se le añaden los nodos y se imprime
    printf("Lista:\n");
    t_list *current = lista;
    while (current != NULL) {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }

    // Tamaño de la lista
    int size = ft_lstsize(lista);
    printf("Tamaño de la lista: %d\n", size);
}*/
