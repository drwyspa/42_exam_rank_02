/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:46:35 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/06 22:03:50 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*strdup;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	strdup = malloc(sizeof(char) * (len + 1));
	if (!strdup)
		return (NULL);
	while (src[i])
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Test123!";
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }
