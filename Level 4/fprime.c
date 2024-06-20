/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:54:54 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/20 21:16:13 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int num)
{
	int	i;

	i = 2;
	if (num < 2)
		return (0);
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fctr_prime(int num)
{
	
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 1;
	num = atoi(argv[1]);
	if (argc == 2)
	{
		if (argv[1] = 1)
			printf("1");
		while (i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == 1)
					break;
				printf("*");
				num /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}