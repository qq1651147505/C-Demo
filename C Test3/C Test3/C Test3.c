#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��ŵ������
//int i=1;
//void Hanoi(int n,char A,char B,char C)
//{
//	if(1==n)
//	{
//		printf("��%d����%c----->%c\n",i,A,C);
//		
//		i++;
//	
//	}
//	else
//	{
//		Hanoi(n-1,A,C,B);//��һ�󲽣�A�ϵ�n-1�������ƶ���B�ϣ�  ʣ����һ���ƶ���C��
//		printf("��%d����%c----->%c\n",i,A,C);
//		i++;
//		Hanoi(n-1,B,A,C);//�ڶ��󲽣�B�ϵ�n-1�������ƶ���A���ϣ�ʣ����һ���ƶ���C��
//	}
//		
//}
//
//int main()
//{
//	int n;
//	printf("������Ҫ���ٸ�����:>");
//	scanf("%d",&n);
//	getchar();
//	Hanoi(n,'A','B','C');
//
//
//	return 0;
//}


//������̨
//������̨�ױ�������쳲�����������
//������̨�ף�1�ο�����һ��̨�ף�1��Ҳ������2��̨�ף���ֻ����Ҫ������n��̨�ף��ж�����������
/*

1.�����1��̨��ֻ��1������
2.���������̨�ף����ܵ�һ�ο���ѡ����һ����Ҳ����ѡ��������������ѡ����һ����֮��ֻ��һ��ѡ������ʣ�µ�һ��̨������һ������������ѡ��������������һ����������������̨������������
3.���������̨�ף���һ�����ܻ��ǿ���ѡ����һ��̨�׻��������������һ��ѡ����һ��̨�ף�������ʣ������̨�׿��԰���2�������������ֿ��ܡ������һ��ѡ������������ʣ��һ��̨�ף����ղ���1��������һ�ֿ��ܡ���������̨������������
4.������ļ�̨�ף����ܵ�һ�����ɿ���ѡ����һ��̨�׻��������������һ������һ��̨�ף���ʣ������̨�����ǿ��԰���3���������ж�����������Ϊ���ֿ��ܡ������һ����������̨�ף���ʣ������̨�ף����ղ���2�����������ֿ��ܡ������ļ�̨������������
��
��
��Ҫ����n��̨���ж�������������Ҫ֪����n-1��̨�׺���n-2��̨���ж�������������Ҫ֪����n-1��̨�׺���n-2��̨���ж�����������Ҫ֪����n-3��n-4��̨���ж������������Դ����ƣ����յõ�������������������׾Ϳ����뵽�õݹ�����⡣�ͺ���һ�����ֵ�쳲��������С�
��������������������������������


*/

//������̨��
int Jump(int n)
{
	if(1==n)
		return 1;
	else if(n==2)
		return 2;
	else
		return Jump(n-1)+Jump(n-2);
}

int main()
{
	int n,ret;
	printf("������Ҫ������:>");
	scanf("%d",&n);
	getchar();

	ret=Jump(n);
	printf("������̨һ����%d������\n",ret);
	return 0;

}