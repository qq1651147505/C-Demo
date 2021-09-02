#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

typedef unsigned int u_int;

//接收一个整型值(无符号)，按照顺序打印它的每一位，列如：输入:1234 输出1 2 3 4  采用递归的方式

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
//	printf("请输入一个无符号整数：>");
//	scanf("%u",&a);//1256
//	getchar();
//	test(a);
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度  递归

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

//求n的阶层   用递归方法

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
//	printf("请输入所需要求那个数的阶层:>");
//	scanf("%d",&n);
//	getchar();
//	nn=test(n);
//	printf("%d\n",nn);
//
//	return 0;
//}

//求第n个斐波那契
//1 1 2 3 5 8 13 21 34 55 89....前两个数的和等于第三个数 递归算法算斐波那契数列效率太低 当求n越大的时候，重复调用过多，效率低
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
//	printf("请输入要求那个数的斐波那契:>");
//	scanf("%d",&n);
//	getchar();
//	a=Fib(n);
//	printf("%d\n",a);
//	return 0;
//}


// 1 1 2 3 5 8 13
//int main()
//{
//	int i=1;//第1个数
//	int j=1;//第2个数
//	int temp;
//	int n;
//	printf("请输入要求那个数的斐波那契:>");
//	scanf("%d",&n);
//	while(n>2)
//	{
//		temp=i+j;
//		i=j;
//		j=temp;
//		n--;  //循环算的次数   假设算第四个斐波那契 只需要算两次就行
//	}
//	printf("%d\n",temp);
//
//
//
//}
// time_t      typedef __int64 __time64_t;       typedef __time64_t time_t  
 //time_t 其实就是long类型

//玩一个猜数字的游戏
//void Menu()
//{
//
//	printf("*************菜单选择*************\n");
//	printf("*************1 玩游戏*************\n");
//	printf("*************2 退出游戏***********\n");
//
//}
////  #define RAND_MAX 0x7fff   十进制是32767
//
//void Game()
//{
//	int k;
//	int Num_rand;
//	//在标准的C库中函数rand()可以生成0~RAND_MAX之间的一个随机数，其中RAND_MAX 是stdlib.h 中定义的一个整数，它与系统有关
//	Num_rand=rand()%100;//生成0-100的随机数   用rand之前 我们需要给rand设置一下，否则会一直产生一个序列的数 用srand给rand的设置一下
//	printf("请输入您猜数字的大小:>");
//	//如果srand每次输入的数值是一样的，那么每次运行产生的随机数也是一样的，
//	while(1)
//	{
//
//		scanf("%d",&k);
//		getchar();
//		
//		if(k > Num_rand)
//			printf("猜大了,请继续猜\n");
//		else if(k <Num_rand)
//			printf("猜小了，请继续猜\n");
//		else
//		{
//			printf("猜对了\n");	
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
//	printf("请输入您的选择:>");
//	scanf("%d",&Select);
//	while( 1 )
//	{	
//	if(1==Select)
//		{
//			srand((u_int)time(NULL));//time(NULL)获取当前系统的时间戳 并将其转换成unsigned int类型
//          //time_t time (time_t* timer); time 返回的是 time_t.类型

//			Game();	
//		
//			printf("是否还需要继续猜游戏，1为继续游戏，0为退出游戏:>");
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


//交换两个整数  用一个函数来实现交换两个整数
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
//	printf("请输入两个整数，并空格隔开:>");
//	scanf("%d%d",&a,&b);
//	getchar();
//	swap(&a,&b);//传地址 用指针操作可以改变局部变量
//	printf("a=%d\tb=%d\n",a,b);
//	return 0;
//}