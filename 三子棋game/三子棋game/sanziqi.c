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
	//��ʼ������
	InitialBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		
	//���������
	PlayerMove(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	/*
	
	�涨�����Ӯ�ˣ����� '*'
		  ����Ӯ�ˣ����� '#'
		  ����      ���� 'C'
		  ƽ��      ���� 'Q'
	*/
	//�����������ж�һ����Ӯ
	ret=IsWin(board,ROW,COL);
	if(ret!='C')
		break;
	
	//�������������
	ComputerMove(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	ret=IsWin(board,ROW,COL);
		if(ret!='C')
			break;
	}


	if(ret=='*')
	{
		printf("���Ӯ��\n");
		
	}
	else if(ret=='#')
	{
		printf("����Ӯ��\n");
		
	}
	else
	{
		printf("ƽ��\n");
		
	}
	DisplayBoard(board,ROW,COL);
}



//��������Ϸ
//
int main()
{
	int n=0;
	srand((U_int) time(NULL));

	
	do
	{
		Menu();
		printf("������ѡ������Ϸ�����˳���Ϸ:>");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			printf("����Ϸ\n\n");
			Game();
			break;
		case 0:
			printf("������Ϸ\n\n");
			break;
		
		default:
			printf("�����������������\n");
		}
	}
	while (n);
	return 0;
}