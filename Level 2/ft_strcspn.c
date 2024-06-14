/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:03:31 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/06 21:24:49 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	s[20] = "abcdef";
// 	char	reject[20] = "ghijkf";
// 	int		index;

// 	index = ft_strcspn(s, reject);
// 	printf("Index: %d\n", index);
// 	return (0);
// }
