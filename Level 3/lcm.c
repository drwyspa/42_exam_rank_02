/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:28:37 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/17 18:47:19 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	num;

	if (a > b)
		num = a;
	else
		num = b;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (num % a == 0 && num % b == 0)
			return (num);
		num++;
	}
}
// int	main(void)
// {
// 	unsigned int	a;
// 	unsigned int	b;
// 	unsigned int	num;

// 	a = 24;
// 	b = 52;
// 	num = lcm(a, b);
// 	printf("A: %d\nB: %d\n", a, b);
// 	printf("LCM: %d\n", num);
// 	return (0);
// }
