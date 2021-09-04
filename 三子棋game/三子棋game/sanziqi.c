#include"game.h"

void Menu()
{
	printf("****************************\n");
	printf("************1 play *********\n");
	printf("************0 exit *********\n");
	printf("****************************\n");

}

void Game()
{
	char board[ROW][COL];
	char ret;
	//初始化棋盘
	InitialBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		
	//玩家走棋盘
	PlayerMove(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	/*
	
	规定：玩家赢了，返回 '*'
		  电脑赢了，返回 '#'
		  继续      返回 'C'
		  平局      返回 'Q'
	*/
	//玩家走完可以判断一下输赢
	ret=IsWin(board,ROW,COL);
	if(ret!='C')
		break;
	
	//电脑随机走棋盘
	ComputerMove(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
		if(ret!='C')
			break;
	}


	if(ret=='*')
	{
		printf("玩家赢了\n");
		
	}
	else if(ret=='#')
	{
		printf("电脑赢了\n");
		
	}
	else
	{
		printf("平局\n");
		
	}
	DisplayBoard(board,ROW,COL);
}



//三子棋游戏
//
int main()
{
	int n=0;
	srand((U_int) time(NULL));

	
	do
	{
		Menu();
		printf("请做出选择玩游戏还是退出游戏:>");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			printf("玩游戏\n\n");
			Game();
			break;
		case 0:
			printf("结束游戏\n\n");
			break;
		
		default:
			printf("输入有误，请从新输入\n");
		}
	}
	while (n);
	return 0;
}