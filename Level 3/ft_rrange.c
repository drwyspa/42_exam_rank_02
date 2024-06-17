/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:43:33 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/17 18:06:00 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_abs(int start, int end)
{
	if (end - start < 0)
		return (((end - start) * -1) + 1);
	else
		return ((end - start) + 1);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	len = ft_abs(start, end);
	range = (int *) malloc(len * sizeof(int));
	while (i < len)
	{
		if (start < end)
			range[i] = end--;
		else
			range[i] = end++;
		i++;
	}
	return (range);
}

// int	main(void)
// {
// 	int	start;
// 	int	end;
// 	int	*range;
// 	int	i;
// 	int	len;

// 	start = 0;
// 	end = -3;
// 	i = 0;
// 	range = ft_rrange(start, end);
// 	len = ft_abs(start, end);
// 	printf("Start: %d\nEnd: %d\n", start, end);
// 	printf("len: %d\n", len);
// 	if (range)
// 	{
// 		while (i < len)
// 		{
// 			printf("%d, ", range[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Allocation error\n");
// 	}
// 	return (0);
// }
