int ft_list_size(t_list *begin_list)
{
    t_list *lst;
    int i;

    lt = begin_list;
    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}