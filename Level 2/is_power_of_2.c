/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:14:54 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/11 18:29:44 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	tst;

	tst = 1;
	while (tst <= n)
	{
		if (tst == n)
			return (1);
		tst *= 2;
	}
	return (0);
}

// int	main(void)
// {
// 	int	n;

// 	n = 15;
// 	printf("Number: %d\n", n);
// 	if (is_power_of_2(n) == 1)
// 		printf("The number is power of 2");
// 	else
// 		printf("The number isn't power of 2");
// 	return (0);
// }
