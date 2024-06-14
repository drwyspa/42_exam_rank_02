/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:38:34 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/04 18:51:41 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 3;
// 	b = 5;
// 	printf("Before change:\na: %d\nb: %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After change:\na: %d\nb: %d\n", a, b);
// 	return (0);
// }
