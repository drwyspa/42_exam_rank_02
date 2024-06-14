/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:09:18 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/03 22:34:47 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int main(void)
// {
// 	char	s1[6];
// 	char	*s2;

// 	s2 = "test2";
// 	printf("s1 before: %s\n", s1);
// 	ft_strcpy(s1, s2);
// 	printf("s1 after: %s\n", s1);
// 	return (0);
// }
