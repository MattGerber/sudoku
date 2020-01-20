/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <magerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 12:32:46 by magerber          #+#    #+#             */
/*   Updated: 2020/01/20 14:23:18 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	create_grid(int	grid[9][9], char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i - 1][j] = (argv[i][j] == '.') ? 0 : argv[i][j] - '0';
			j++;
		}
		i++;
	}
}



void	print_grid(int	grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grid[i][j]);
			if (j == 8) 
			{
				ft_putchar('\n');
				if (i == 2 || i == 5 )
					ft_putstr("------|-------|------\n");
			}
			else if (j == 2 || j == 5)
				ft_putstr(" | ");
			else
				ft_putchar(' ');
			
			j++;
		}
		i++;
	}
}

void	brute(int	grid[9][9])
{

}

int		main(int argc, char **argv)
{
	int		grid[9][9];
	
	if (argc == 10 )
	{
		create_grid(grid, argv);
		print_grid(grid);
		
	}
	else
		ft_putstr("INVALID INPUT");
}