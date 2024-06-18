/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:27:42 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/18 19:33:59 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

void	ft_puthex(int nbr)
{
	char	digits[] = "0123456789abcdef";
	
	if (nbr >= 16)
		ft_puthex(nbr / 16);
	nbr = digits[nbr % 16];
	write (1, &nbr, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_puthex(ft_atoi(argv[1]));
	write (1, "\n", 1);
	return (0);
}
