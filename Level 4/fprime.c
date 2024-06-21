/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:54:54 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/21 18:11:26 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	if (argc == 2)
	{
		i = 2;
		num = atoi(argv[1]);
		if (num == 1)
		{
			printf("1");
			return (0);
		}
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
