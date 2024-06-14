/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:45:17 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/12 21:12:38 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char			*s1;
	char			*s2;
	int				i;
	int				len;

	s1 = argv[1];
	s2 = argv[2];
	i = 0;
	len = 0;
	if (argc == 3)
	{
		while (s1[len])
			len++;
		while (i < len && *s2)
		{
			if (s1[i] == *s2)
				i++;
			s2++;
		}
		if (i == len)
			write(1, s1, len);
	}
	write(1, "\n", 1);
	return (0);
}
