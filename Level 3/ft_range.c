/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:07:56 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/14 19:57:44 by pjedrycz         ###   ########.fr       */
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

int	*ft_range(int start, int end)
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
			range[i] = start++;
		else
			range[i] = start--;
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

// 	start = 1;
// 	end = -5;
// 	i = 0;
// 	range = ft_range(start, end);
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
