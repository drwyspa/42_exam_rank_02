/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !!!_ft_atoi_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:10:34 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/13 21:53:30 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_valid(int ch, int baselen)
{
	char	*lowcase;
	char	*uppcase;
	int		i;

	lowcase = "0123456789abcdef";
	uppcase = "0123456789ABCDEF";
	i = 0;
	while (i < baselen)
	{
		if (ch == lowcase[i] || ch == uppcase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && is_valid(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= 48 && str[i] <=57)
			res += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res + sign);
}
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	if (argc == 3)
	{
		printf("%d", ft_atoi_base(argv[1], ft_atoi_base(argv[2], 10)));
		return (0);
	}
}
