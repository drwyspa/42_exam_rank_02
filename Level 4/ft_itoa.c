/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:17:00 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/22 16:33:50 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = ft_intlen(nbr);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = 48;
	while (nbr)
	{
		len--;
		str[len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	printf("Integer length: %d\n", ft_intlen(n));
// 	printf("Integer as a string: %s\n", ft_itoa(n));
// 	return (0);
// }
