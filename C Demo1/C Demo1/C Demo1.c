#include<stdio.h>
#include<string.h>

//if ���  ����������ʽ
//��ʽ1
//int main()
//{
//	int a=90;
//	if (a>=90)//����Ϊ�����if���
//	{
//	  printf("�������\n");
//	}
//	
//
//
//
// return 0;
//}

//��ʽ2

//int main()
//{
//	int a=90;
//	if (a>90)//�����������if���
//	{
//	  printf("�������\n");
//	}
//	else//���������� ��else���
//	{
//	  printf("��û�ﵽҪ��,�����Ŭ����\n");
//	}
//
//
//
// return 0;
//}

//��ʽ3

//int main()
//{
//	int a=80;
//	if (60==a)//�����������if���    �����������ֻ��һ������ʱ�򣬿���ʡ�Բ�д{}
//	{ 
//	  printf("�ոռ���\n");
//	}
//	else if (a > 60 && a <=70)
//	{
//		printf("����Ŭ��\n");  
//	}
//	else if(a >70 && a<= 80)
//	{
//		printf("���ã�\n");
//	}
//	else
//	{
//	  printf("�޷��жϣ�\n");
//	}
//
// return 0;
//}

//if ����Ƕ��
//int main()
//{
//	int a=0;
//	while(1)
//	{
//		scanf("%d",&a);
//		if (a >=60)
//		{
//			if (a >= 90 )
//			{
//			  printf("�ɼ�����!\n");
//			  break;
//			}
//			else if (a <90 )
//			{
//				printf("�ɼ�����!\n");
//				break;
//			}
//		}
//		else if (a>=0 && a < 60)
//		{
//		 printf("�ɼ�������\n");
//		 break;
//		}
//		else
//		{
//			printf("����ɼ��������������!\n");
//			continue;
//		}
//	
//	}
//	
//
//
//
// return 0;
//}

//if ���ƥ��ԭ��

//int main()
//{
//	int a=0;
//	int b=2;
//	if (1==a)
//		if (2==b)
//			printf("hehe\n");
//	//else 
//	//	printf("haha\n"); //���ﲻ���ӡ�κζ���  ��Ϊ����{} else ���������ifƥ��
//
//		else
//			printf("haha\n");//����д���������д��һ��
//
//	return 0;
//}

//int main()
//{
//	int a=0;
//	int b=2;
//	if (1==a)
//	{
//		if (2==b)
//		{
//		 printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");//���haha   ����{}��ϵ����  elseƥ��������if
//	}
//	//else
//	//	printf("haha\n");//�������һ��ֻ��һ���ʱ�� ����ʡ��{}
//	//	
//	
//
//	return 0;
//}



//switch ���  �����ڶ��֮���

//int main()
//{
//	int count;
//
//	scanf("%d",&count);
//	//"��������������ʽ" example:"%d%d" �����������ͣ�Ĭ�Ͽո������
//	//"%d,%d" ������������ ��,����
//	switch(count)
//	{

//	// case ��������ͱ���
//	/*case 1:
//		printf("����һ\n");
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");*/
//	/*
//			5
//		������
//		������
//		������
//		û��berak�Ļ� ��5����ڽ�ȥ ������ֹͣ����ִ�У������ִ�������case 6  7  
//	*/
//
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	
//	}
//	//ֻ��������ĳһ�� example��3  ������
//	
//	return 0;
//
//}
//


//switch���ʡ��д��

//int main()
//{
//	int count;
//	scanf("%d",&count);
//	switch (count)//count Ϊ�������
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������!\n");
//			break; //break Ϊ����switch���
//		case 6:
//		case 7:
//			printf("��Ϣ��!\n");
//			break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int count;
//	scanf("%d",&count);
//	switch (count)//count Ϊ�������
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������!\n");
//			break; //break Ϊ����switch���
//		case 6:
//		case 7:
//			printf("��Ϣ��!\n");
//			break;
//
//
//		default://�޷�ƥ����default ���
//			printf("�������!\n");
//			break;
//	}
//
//	return 0;
//}


//switch ���Ƕ��

//
//int main()
//{
//	int n=1;
//	int m=2;
//	switch (n)
//	{
//		case 1:m++; //m==3
//		case 2:n++; //n==2
//		case 3:
//			switch(n) //n==2
//			{
//			case 1:n++;
//			case 2:m++;n++;break;//m==4 n==3
//			}
//		case 4:m++;break;// m==5,n==3
//		default:
//			break;
//	}
//	printf("m=%d,n=%d\n",m,n);//m==5 n==3
//
//	return 0;
//}