/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:42 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/25 18:51:22 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
// #include <stdio.h>
// #include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if(begin_list->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// // Filling the data
// void print_data(void *data)
// {
//     printf("%s\n", (char *)data);
// }

// // Creating new element of the list
// t_list *create_elem(void *data)
// {
//     t_list *new_elem = (t_list *)malloc(sizeof(t_list));
//     if (new_elem)
//     {
//         new_elem->data = data;
//         new_elem->next = NULL;
//     }
//     return new_elem;
// }

// int main()
// {
//     // Creating list elements
//     t_list *elem1 = create_elem("Element 1");
//     t_list *elem2 = create_elem("Element 2");
//     t_list *elem3 = create_elem("Element 3");

//     // Joining elemnts into one list
//     elem1->next = elem2;
//     elem2->next = elem3;

//     // Using sample function
//     ft_list_foreach(elem1, print_data);

//     // Free the memory
//     free(elem1);
//     free(elem2);
//     free(elem3);

//     return 0;
// }
