/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !!!_union.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:44:20 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/14 18:44:25 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	lookup[256] = {};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
			lookup[(int)argv[1][i++]] = 1;
		i = 0;
		while (argv[2][i])
			lookup[(int)argv[2][i++]] = 1;
		i = 0;
		while (argv[1][i])
		{
			if (lookup[(int)argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				lookup[(int)argv[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (lookup[(int)argv[2][i]])
			{
				write (1, &argv[2][i], 1);
				lookup[(int)argv[2][i]] = 0;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
