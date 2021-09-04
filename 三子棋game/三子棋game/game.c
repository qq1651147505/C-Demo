#include"game.h"

//��ʼ������
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
	printf("�����������������:>");
	scanf("%d %d",&x,&y);
	//�ж�����ĺϷ���
	if(x >=1&& x<=row && y>=1 &&y<=col )
	{
		//�ж����̸�λ���Ƿ��¹�
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='*';	
			break;
		}
		else
		{
		printf("��λ�����¹�����������������\n");
		
		}
	 }
	else
		printf("��������Ƿ�\n");

	}
	


}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x;//x: 0~row-1
	int y;//y:0~col-1
	printf("�����ߣ�>\n");
	while(1)
	{
		//int a=rand����% X��X����Χ������α�����  rand()%100������0-99���������
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
	//�ж���Ӯ
	//���ݹ��� �������� ������������ �Խ������Ŷ���Ӯ

	//�ж���������
	for(i=0;i<row;i++)
	{
		
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}


	}


	//�ж���������
	for(i=0;i<col;i++)
	{
		
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}


	}

	//�ж϶Խ���Ӯ
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
		return board[1][1];

	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
		return board[1][1];
	//�ж������Ƿ�����
	ret=IsFull(board,row,col);//0��ʾû��  1��ʾ��
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