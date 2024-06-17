/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:39:15 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/17 20:52:48 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	num;

	if (n >= 10)
		ft_putnbr (n / 10);
	num = (n % 10) + 48;
	write (1, &num, 1);
}

int	main(int argc, char **argv)
{
	(void) argv;
	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}
