/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:25:57 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/06 21:45:04 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	flag;

	i = 0;
	while (s[i])
	{
		j = 0;
		flag = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				flag = 1;
			j++;
		}
		if (flag == 0)
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	s[20] = "hello";
// 	char	accept[20] = "jfkhpell";
// 	int		index;

// 	index = ft_strspn(s, accept);
// 	printf("Index: %d\n", index);
// 	return (0);
// }
