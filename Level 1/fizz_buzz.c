/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:26:00 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/03 21:59:34 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int i)
{
	long	num;

	num = i;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num <= 9)
		ft_putchar(num + 48);
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

int	main(void)
{
	unsigned int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		i++;
		write (1, "\n", 1);
	}
	return (0);
}
