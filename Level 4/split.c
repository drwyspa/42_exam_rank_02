/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:12:13 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/21 20:12:15 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (str[i] <= 32)
		i++;
	while (str[i])
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4096);
		if (!split)
			return (NULL);
		while (str[i] && str[i] > 32)
			split[k][j++] = str[i++];
		while (str[i] && str[i] <= 32)
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}
// int	main(void)
// {
// 	int		idx;
// 	char	**tab;

// 	idx = 0;
// 	tab = ft_split("The prophecy is true");
// 	while (idx < 4)
// 	{
// 		printf("String %d : %s\n", idx, tab[idx]);
// 		idx++;
// 	}
// 	return (0);
// }

// int		main(void)
// {
// 	char **arr;

// 	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
// 	arr = ft_split(phrase);
// 	printf("%s\n", arr[0]);
// 	printf("%s\n", arr[1]);
// 	printf("%s\n", arr[2]);
// 	printf("%s\n", arr[3]);
// }