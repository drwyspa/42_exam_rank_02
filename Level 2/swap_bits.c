/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:13:25 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/12 21:40:31 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// int	main(void)
// {
// 	unsigned char	bit;
// 	unsigned char	res;
// 	int				i;

// 	bit = 0;
// 	res = swap_bits((unsigned char)15);
// 	i = 8;
// 	while (i--)
// 	{
// 		bit = (res >> i & 1) + 48;
// 		printf("%c", bit);
// 	}
// 	return (0);
// }
