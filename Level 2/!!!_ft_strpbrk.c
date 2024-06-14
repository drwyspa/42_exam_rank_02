/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:11:44 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/10 21:26:35 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	// int	i;
	int	j;

	// i = 0;
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == *s1)
				return ((char *) s1);
			j++;
		}
		s1++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1 = "test";
// 	char	*s2 = "dhnez";

// 	printf("Pointer: %s\n", ft_strpbrk(s1, s2));
// 	return (0);
// }
