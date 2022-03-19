#ifndef TICTACTO
# define TICTACTO

#include <stdio.h>

void	print_field(char arr[3][3]);
int		check_if_empty(char arr[3][3], int x, int y);
void	ask_for_input(char arr[3][3], int player);
void	game_won(int game_end);
int		check_rows(char arr[3][3], char sign);
int		check_columns(char arr[3][3], char sign);
int		check_cross(char arr[3][3], char sign);
int		check_field(char arr[3][3], int player);

#endif