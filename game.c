#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//
//
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ",board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//		}
//		printf("\n");
//	}
//}
//void Playmove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家走");
//	while (1)
//	{
//		printf("请输入位置坐标：");
//		scanf("%d%d", &i, &j);
//		if (i > 0 && i <= row && j > 0 && j <= col)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该位置被占用\n");
//			}
//		}
//		else
//		{
//			printf("非法位置，请重新输入\n");
//		}
//	}
//}
//
//void Compmove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("电脑走\n");
//
//	while (1)
//	{
//		i = rand() % row;
//		j = rand() % col;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//
//	}
//}
//
//char Win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	for (j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//		{
//			return board[0][j];
//		}
//	}
//	if (board[0][0] == board[2][2] && board[2][2] == board[1][1] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (1 == Isfull(board,row,col))
//	{
//		return 'Q';
//	}
//	return 'C';
//}
//
//
//int Isfull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ') 
//				return 0;
//		
//		}
//	}
//	return 1;
//}

void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家移动\n");
	while (1)
	{
		printf("请输入坐标地址：");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该位置被占用\n");
		}
		else
		{
			printf("该坐标无效\n");
		}
	}
}
int isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] == ' ';
			return 0;
		}
	}
	return 1;
}

void compmove(char board[ROW][COL], int row, int col)
{
	printf("电脑移动\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
			{
				return 1;
			}
			if (board[i][0] == '#')
			{
				return 0;
			}
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			if (board[0][i] == '*')
			{
				return 1;
			}
			if (board[0][i] == '#')
			{
				return 0;
			}
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		if (board[0][0] == '*')
		{
			return 1;
		}
		if (board[0][0] == '#')
		{
			return 0;
		}
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		if (board[2][0] == '*')
		{
			return 1;
		}
		if (board[2][0] == '#')
		{
			return 0;
		}
	}
	if (1 == isfull(board,ROW,COL)) 
	{
		return 'Q';
	}
	else
		return 'c';
}