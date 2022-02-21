#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//
//
//void game()
//{
//	char board[ROW][COL] = { 'a' };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	char ret;
//	while (1)
//	{
//		Playmove(board, ROW, COL);
//   		DisplayBoard(board, ROW, COL);
//		ret = Win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		Compmove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = Win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	
//	}
//	if (ret == '*')
//	{
//		printf("玩家胜利\n");
//	}
//	if (ret == '#')
//	{
//		printf("电脑胜利\n");
//	}
//	if (ret == 'Q')
//	{
//		printf("平局\n");
//
//	}
//}
//
//void mune()
//{
//	printf("******************************\n");
//	printf("****1.进入游戏  0.退出游戏****\n");
//	printf("******************************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mune();
//		printf("请输入指令：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("即将退出游戏\n");
//			break;
//		}
//		default:
//		{
//			printf("选择错误，请重新选择\n");
//		}
//			break;
//		}
//	}while (input);
//		return 0;
//}

void mune()
{
	printf("**************************************\n");
	printf("****1.进入游戏          0.退出游戏****\n");
	printf("**************************************\n");

}
void judge(int ret)
{
	if (ret == 1)
	{
		printf("玩家获胜\n");
	}
	else if (ret == 0)
	{
		printf("电脑获胜\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}
}

void game()
{
	char board[ROW][COL] = { 'a' };
	initBoard(board, ROW, COL);
	displayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		playermove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		compmove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	judge(ret);


}

int main2()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mune();
		printf("请输入指令:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("即将退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
		}
	} while (input);
	return 0;
}
