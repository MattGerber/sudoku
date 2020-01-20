#ifndef SUDOKU_H
# define SUDOKU_H
# include "libft/libft.h"

typedef struct		s_grid
{
 	struct s_grid	*next;
 	struct s_grid	*colomn;
	struct s_grid	*row;
	struct s_grid	*block;
	
	int 			x;
	int				y;
	int				fixed;

}					t_grid;

#endif
