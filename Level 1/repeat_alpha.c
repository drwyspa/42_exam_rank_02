/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:02:50 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/04 19:37:29 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isupper(char c)
{
	int	j;

	j = 0;
	while (j < c - 64)
	{
		write (1, &c, 1);
		j++;
	}
}

void	ft_islower(char c)
{
	int	j;

	j = 0;
	while (j < c - 96)
	{
		write (1, &c, 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_isupper(argv[1][i]);
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_islower(argv[1][i]);
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
