void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return (0);
    new->next = *lst;
    *lst = new;
}