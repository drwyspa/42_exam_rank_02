/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:49 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/11 19:07:43 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				res;
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

// int	main(void)
// {
// 	int	tab[] = {2, 5, 2, 107, 3, 12, 9, 55, 23, 95};

// 	printf("Max number in table is: %d\n", max(tab, 10));
// 	return (0);
// }
