/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !!!_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:54:30 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/14 18:44:01 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	lookup[256] = {};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !lookup[(int)argv[2][j]])
				{
					lookup[(int)argv[2][j]] = 1;
					ft_putchar(argv[2][j]);
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
