#include "tictatcto.h"

int check_rows(char arr[3][3], char sign)
{
	if ((arr[0][0] == sign) && (arr[0][1] == sign) && (arr[0][2] == sign))
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	if (arr[1][0] == sign && arr[1][1] == sign && arr[1][2] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	if (arr[2][0] == sign && arr[2][1] == sign && arr[2][2] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	return (0);
}

int check_columns(char arr[3][3], char sign)
{
	if (arr[0][0] == sign && arr[1][0] == sign && arr[2][0] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	if (arr[0][1] == sign && arr[1][1] == sign && arr[2][1] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	if (arr[0][2] == sign && arr[1][2] == sign && arr[2][2] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	return (0);
}

int check_cross(char arr[3][3], char sign)
{
	if (arr[0][0] == sign && arr[1][1] == sign && arr[2][2] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	if (arr[0][2] == sign && arr[1][1] == sign && arr[2][0] == sign)
	{
		if (sign == 'X')
			return (1);
		else
			return (2);
	}
	return (0);
}

int check_field(char arr[3][3], int player)
{
	int result;
	char sign;

	if (player % 2 + 1 == 1)
		sign = 'X';
	else
		sign = 'O';
	result = check_rows(arr, sign);
	if (!result)
		result = check_columns(arr, sign);
	if (!result)
		result = check_cross(arr, sign);
	return (result);	
}