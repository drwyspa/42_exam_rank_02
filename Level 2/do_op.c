/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:06:19 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/06 18:18:33 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1])
	{
		if (argv[2][0] == '+')
			printf("Summary: %d", ((atoi(argv[1])) + atoi(argv[3])));
		else if (argv[2][0] == '-')
			printf("Diff: %d", ((atoi(argv[1])) - atoi(argv[3])));
		else if (argv[2][0] == '*')
			printf("Ratio: %d", ((atoi(argv[1])) * atoi(argv[3])));
		else if (argv[2][0] == '/')
			printf("Quotient: %d", ((atoi(argv[1])) / atoi(argv[3])));
		else if (argv[2][0] == '%')
			printf("Modulo: %d", ((atoi(argv[1])) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
