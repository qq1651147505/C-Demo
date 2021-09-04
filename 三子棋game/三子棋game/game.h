#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 3
#define COL 3

typedef unsigned int U_int;

//声明初始化棋盘
void InitialBoard(char board[ROW][COL],int row,int col);
//声明展示棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);
//玩家走棋盘
void PlayerMove(char board[ROW][COL],int row,int col);
//电脑走棋盘
void ComputerMove(char board[ROW][COL],int row,int col);

//判断输赢声明;
char IsWin(char board[ROW][COL],int row,int col);

//判断平局声明
int IsFull(char board[ROW][COL],int row,int col);