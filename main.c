#include "tictatcto.h"

void print_field(char arr[3][3])
{
	printf("------------------\n");
	printf("   #############\n");
	printf("   # %c # %c # %c #\n", arr[0][0], arr[0][1], arr[0][2]);
	printf("   #############\n");
	printf("   # %c # %c # %c #\n", arr[1][0], arr[1][1], arr[1][2]);
	printf("   #############\n");
	printf("   # %c # %c # %c #\n", arr[2][0], arr[2][1], arr[2][2]);
	printf("   #############\n");
}

int check_if_empty(char arr[3][3], int x, int y)
{
	if (arr[y][x] != ' ')
		return (1);
}

void ask_for_input(char arr[3][3], int player)
{
	int x;
	int y;
	printf("Player %d: Enter position (row/colum -> y/x):\n", (player % 2) + 1);
	scanf("%d %d", &y, &x);
	if(check_if_empty(arr, x, y) == 1)
	{
		printf("Choose another one!\n");
		ask_for_input(arr, player);
	}
	else
	{
		if ((player % 2) == 0)
			arr[y][x] = 'X';
		else
			arr[y][x] = 'O';
	}
}

void game_won(int game_end)
{
	printf("--------------------\n");
	printf("-----GAME OVER------\n");
	printf("--------------------\n");
	if (game_end != 3)
	{
		printf("---THE WINNER IS:---\n");
		printf("-------PLAYER %d-----\n", game_end);
		printf("--------------------\n");
	}

}

int main(void)
{
	char arr[3][3] = {{' ', ' ', ' '}, 
					{' ', ' ', ' '},
					{' ', ' ', ' '}};
	int game_end;
	int player;
	game_end = 0;
	player = 0;
	print_field(arr);
	while (game_end == 0)
	{
		ask_for_input(arr, player);
		print_field(arr);
		game_end = check_field(arr, player);
		player++;
		if (player == 9)
			game_end = 3;
	}
	game_won(game_end);

	return (0);
}