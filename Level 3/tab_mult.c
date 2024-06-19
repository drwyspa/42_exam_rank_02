/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:22:40 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/19 18:50:09 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	char	nbr;

	nbr = 0;
	if (n >= 10)
		ft_putnbr(n / 10);
	nbr = (n % 10) + 48;
	write(1, &nbr, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;

	i = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		nbr = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
