#include"game.h"

//初始化棋盘
void InitialBoard(char board[ROW][COL],int row,int col)
{
	int i;
	int j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}


}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i;
	int j;
	

    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
			
		
		}
		printf("\n");

		if(i<row-1)
		{
				for(j=0;j<col;j++)
					{
						printf("---");
						if(j<col-1)
							printf("|");
				     }
		
				printf("\n");
		}
		

	}


}

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x,y;
	while(1)
	{
	printf("玩家请输入坐标下棋:>");
	scanf("%d %d",&x,&y);
	//判断坐标的合法性
	if(x >=1&& x<=row && y>=1 &&y<=col )
	{
		//判断棋盘该位置是否下过
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='*';	
			break;
		}
		else
		{
		printf("该位置已下过，请重新输入坐标\n");
		
		}
	 }
	else
		printf("坐标输入非法\n");

	}
	


}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x;//x: 0~row-1
	int y;//y:0~col-1
	printf("电脑走：>\n");
	while(1)
	{
		//int a=rand（）% X（X即范围）这是伪随机数  rand()%100；产生0-99的随机数。
		int x=rand()%row;
		int y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}


	
	}


}

char IsWin(char board[ROW][COL],int row,int col)
{
	int i,j;
	char ret;
	//判断输赢
	//根据规则 三行连着 活着三列连着 对角线连着都算赢

	//判断三行连着
	for(i=0;i<row;i++)
	{
		
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}


	}


	//判断三列连着
	for(i=0;i<col;i++)
	{
		
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}


	}

	//判断对角线赢
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
		return board[1][1];

	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
		return board[1][1];
	//判断棋盘是否满了
	ret=IsFull(board,row,col);//0表示没满  1表示满
	if(1==ret)
		return 'Q';

	return 'C';
}


int IsFull(char board[ROW][COL],int row,int col)
{

	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
				return 0;
			
		}
	
	}
	return 1;
}