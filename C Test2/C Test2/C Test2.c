#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

typedef unsigned int u_int;

//����һ������ֵ(�޷���)������˳���ӡ����ÿһλ�����磺����:1234 ���1 2 3 4  ���õݹ�ķ�ʽ

/*
(123)4      1234 / 10 = 123...       4
(12) 3 4    123/ 10  =12    ... 3
			12/10     1   .... 2
			1/10    0 .....1
(1) 2 3 4

*/
//void test(u_int a)
//{
//	u_int b;
//
//	if(a > 0)
//	{
//		b=a % 10;
//		a=a/10;
//		
//		test(a);
//		printf("%u ",b);
//		
//	}
//	
//
//}
//
//int main()
//{
//	u_int a=0;
//	printf("������һ���޷���������>");
//	scanf("%u",&a);//1256
//	getchar();
//	test(a);
//	return 0;
//}


//��д��������������ʱ���������ַ����ĳ���  �ݹ�

//int test(char* str)
//{
//	if((*str)!=0)
//	{
//	
//
//		return 1+test(str+1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr1[]="hello word!";
//	int a;
//	a=test(arr1);
//	printf("a=%d\n",a);
//	
//
//	return 0;
//}

//��n�Ľײ�   �õݹ鷽��

// 9--- 1*2*3*4*5*6*7*8*9     
//int test(int n)    
//{
//	if(n>=2)
//	{
//	
//		return n * test(n-1);
//	}
//	else
//		return 1;
//
//
//}
//int main()
//{
//	int n=0;
//	int nn;
//	printf("����������Ҫ���Ǹ����Ľײ�:>");
//	scanf("%d",&n);
//	getchar();
//	nn=test(n);
//	printf("%d\n",nn);
//
//	return 0;
//}

//���n��쳲�����
//1 1 2 3 5 8 13 21 34 55 89....ǰ�������ĺ͵��ڵ������� �ݹ��㷨��쳲���������Ч��̫�� ����nԽ���ʱ���ظ����ù��࣬Ч�ʵ�
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//	return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//	int n=0;
//	int a;
//	printf("������Ҫ���Ǹ�����쳲�����:>");
//	scanf("%d",&n);
//	getchar();
//	a=Fib(n);
//	printf("%d\n",a);
//	return 0;
//}


// 1 1 2 3 5 8 13
//int main()
//{
//	int i=1;//��1����
//	int j=1;//��2����
//	int temp;
//	int n;
//	printf("������Ҫ���Ǹ�����쳲�����:>");
//	scanf("%d",&n);
//	while(n>2)
//	{
//		temp=i+j;
//		i=j;
//		j=temp;
//		n--;  //ѭ����Ĵ���   ��������ĸ�쳲����� ֻ��Ҫ�����ξ���
//	}
//	printf("%d\n",temp);
//
//
//
//}
// time_t      typedef __int64 __time64_t;       typedef __time64_t time_t  
 //time_t ��ʵ����long����

//��һ�������ֵ���Ϸ
//void Menu()
//{
//
//	printf("*************�˵�ѡ��*************\n");
//	printf("*************1 ����Ϸ*************\n");
//	printf("*************2 �˳���Ϸ***********\n");
//
//}
////  #define RAND_MAX 0x7fff   ʮ������32767
//
//void Game()
//{
//	int k;
//	int Num_rand;
//	//�ڱ�׼��C���к���rand()��������0~RAND_MAX֮���һ�������������RAND_MAX ��stdlib.h �ж����һ������������ϵͳ�й�
//	Num_rand=rand()%100;//����0-100�������   ��rand֮ǰ ������Ҫ��rand����һ�£������һֱ����һ�����е��� ��srand��rand������һ��
//	printf("�������������ֵĴ�С:>");
//	//���srandÿ���������ֵ��һ���ģ���ôÿ�����в����������Ҳ��һ���ģ�
//	while(1)
//	{
//
//		scanf("%d",&k);
//		getchar();
//		
//		if(k > Num_rand)
//			printf("�´���,�������\n");
//		else if(k <Num_rand)
//			printf("��С�ˣ��������\n");
//		else
//		{
//			printf("�¶���\n");	
//			break;
//		}
//
//	}
//	
//		
//
//
//}
//
//int main()
//{
//	int Select;
//	int k;
//	Menu();
//	printf("����������ѡ��:>");
//	scanf("%d",&Select);
//	while( 1 )
//	{	
//	if(1==Select)
//		{
//			srand((u_int)time(NULL));//time(NULL)��ȡ��ǰϵͳ��ʱ��� ������ת����unsigned int����
//          //time_t time (time_t* timer); time ���ص��� time_t.����

//			Game();	
//		
//			printf("�Ƿ���Ҫ��������Ϸ��1Ϊ������Ϸ��0Ϊ�˳���Ϸ:>");
//			scanf("%d",&k);
//			getchar();
//			if(1==k)
//				continue;
//			else
//				break;
//		}	
//	else
//		break;
//
//
//	}
//	
//		
//
//	return 0;
//}


//������������  ��һ��������ʵ�ֽ�����������
//void swap(int* p,int* p1)
//{
//	int temp;
//	temp=*p;
//	*p=*p1;
//	*p1=temp;
//
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	printf("�������������������ո����:>");
//	scanf("%d%d",&a,&b);
//	getchar();
//	swap(&a,&b);//����ַ ��ָ��������Ըı�ֲ�����
//	printf("a=%d\tb=%d\n",a,b);
//	return 0;
//}