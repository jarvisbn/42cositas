void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;
    
    current = *lst;
    while (current != '\0')
    {
        next = current->next;
        if (del != '\0')
            del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL
}
