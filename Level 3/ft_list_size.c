/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:47:52 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/14 18:47:33 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	node3;
// 	int		size;

// 	node1.next = &node2;
// 	node1.data = "one";

// 	node2.next = &node3;
// 	node2.data = "two";

// 	node3.next = NULL;
// 	node3.data = "three";

// 	size = ft_list_size(&node1);
// 	printf("Liste size is: %d\n", size);
// 	return (0);
// }
