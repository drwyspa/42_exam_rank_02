/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:47:32 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/26 19:58:23 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

// void	ft_print_tab_int(int *tab, unsigned int size)
// {
// 	unsigned int	idx;

// 	idx = 0;
// 	while (idx < size)
// 	{
// 		printf(" [%d] ", tab[idx]);
// 		idx++;
// 	}
// }

// int	main(void)
// {
// 	int				tab[10];
// 	unsigned int	size;

// 	tab[0] = 9;
// 	tab[1] = 1;
// 	tab[2] = 7;
// 	tab[3] = 4;
// 	tab[4] = 8;
// 	tab[5] = 9;
// 	tab[6] = 2;
// 	tab[7] = 4;
// 	tab[8] = 5;
// 	tab[9] = 0;
// 	size = 10;
// 	ft_print_tab_int(tab, size);
// 	sort_int_tab(tab, size);
// 	printf("\n");
// 	ft_print_tab_int(tab, size);
// 	printf("\n");
// 	return (0);
// }
