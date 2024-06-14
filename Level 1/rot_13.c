/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:33:00 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/05 21:09:37 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 77) ||
			(argv[1][i] >= 97 && argv[1][i] <= 109))
				argv[1][i] += 13;
			else if ((argv[1][i] >= 78 && argv[1][i] <= 90) ||
			(argv[1][i] >= 110 && argv[1][i] <= 122))
				argv[1][i] -= 13;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
