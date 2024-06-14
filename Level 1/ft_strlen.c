/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:35:28 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/03 22:41:35 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char			*str;
// 	unsigned int	i;

// 	str = "test123";
// 	i = ft_strlen(str);
// 	printf("str: %s\n", str);
// 	printf("str lenght: %d\n", i);
// 	return (0);
// }
