/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:55:11 by jbayona-          #+#    #+#             */
/*   Updated: 2023/11/20 14:04:48 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main() {
    // Creo nodos con mi función
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    // Compruebo que se han creado
    printf("Contenido del Nodo 1: %s\n", (char *)node1->content);
    printf("Contenido del Nodo 2: %s\n", (char *)node2->content);
    printf("Contenido del Nodo 3: %s\n", (char *)node3->content);
}*/
