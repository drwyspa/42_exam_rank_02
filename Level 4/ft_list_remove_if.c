/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:16:54 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/28 21:56:37 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	if ((begin_list == NULL) || (*begin_list == NULL))
		return;
	current = *begin_list;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp);
	}
}

// // Compare the data
// int cmp(void *data1, void *data2)
// {
//     return strcmp((char *)data1, (char *)data2);
// }

// // Creating new element of the list
// t_list *create_elem(void *data)
// {
//     t_list *new_elem = (t_list *)malloc(sizeof(t_list));
//     if (!new_elem)
//         return NULL;
//     new_elem->data = data;
//     new_elem->next = NULL;
//     return new_elem;
// }

// // Adding new element to the beginning of the list
// void list_push_front(t_list **begin_list, void *data)
// {
//     t_list *new_elem = create_elem(data);
//     if (new_elem)
//     {
//         new_elem->next = *begin_list;
//         *begin_list = new_elem;
//     }
// }

// // Print the list
// void print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s -> ", (char *)list->data);
//         list = list->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     t_list *list = NULL;

//     // Adding elemnts to the list
//     list_push_front(&list, "element3");
//     list_push_front(&list, "element2");
//     list_push_front(&list, "element1");

//     printf("Lista przed usunięciem:\n");
//     print_list(list);

//     // Deleting elements equal to "element2"
//     ft_list_remove_if(&list, "element2", cmp);

//     printf("Lista po usunięciu 'element2':\n");
//     print_list(list);

//     // Free the memory of rest elements
//     while (list)
//     {
//         t_list *temp = list;
//         list = list->next;
//         free(temp);
//     }

//     return 0;
// }
