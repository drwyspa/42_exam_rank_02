/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:35:55 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/18 20:09:15 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32 || c == '\0')
		return (1);
	return (0);
}

void	ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if ((str[i] >= 97 && str[i] <= 122) && ft_isspace(str[i + 1]))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		while (i < argc)
		{
			ft_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
