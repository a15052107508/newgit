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
//		printf("���ʤ��\n");
//	}
//	if (ret == '#')
//	{
//		printf("����ʤ��\n");
//	}
//	if (ret == 'Q')
//	{
//		printf("ƽ��\n");
//
//	}
//}
//
//void mune()
//{
//	printf("******************************\n");
//	printf("****1.������Ϸ  0.�˳���Ϸ****\n");
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
//		printf("������ָ�");
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
//			printf("�����˳���Ϸ\n");
//			break;
//		}
//		default:
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//			break;
//		}
//	}while (input);
//		return 0;
//}

void mune()
{
	printf("**************************************\n");
	printf("****1.������Ϸ          0.�˳���Ϸ****\n");
	printf("**************************************\n");

}
void judge(int ret)
{
	if (ret == 1)
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == 0)
	{
		printf("���Ի�ʤ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
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
		printf("������ָ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
		}
	} while (input);
	return 0;
}
