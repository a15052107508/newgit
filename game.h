#define ROW 3
#define COL 3
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row, int col);
//void Playmove(char board[ROW][COL], int row, int col);
//void Compmove(char board[ROW][COL], int row, int col);
//char Win(char board[ROW][COL], int row, int col);
//int Isfull(char board[ROW][COL], int row, int col);
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void initBoard(char board[ROW][COL], int row, int col);
void displayBoard(char board[ROW][COL], int row, int col); 
void playermove(char board[ROW][COL], int row, int col);
void compmove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);