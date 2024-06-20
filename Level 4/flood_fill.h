/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:33:51 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/06/20 20:40:52 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, char target, int row, int col);
void	flood_fill(char **tab, t_point size, t_point begin);
char** make_area(char** zone, t_point size);
