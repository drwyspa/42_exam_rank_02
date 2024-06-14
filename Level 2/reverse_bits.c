/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:20:05 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/12 18:30:13 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

// int	main(void)
// {
// 	unsigned char	bit;
// 	unsigned char	res;
// 	int				i;

// 	bit = 0;
// 	res = reverse_bits((unsigned char)15);
// 	i = 8;
// 	while (i--)
// 	{
// 		bit = (res >> i & 1) + 48;
// 		printf("%c", bit);
// 	}
// 	return (0);
// }