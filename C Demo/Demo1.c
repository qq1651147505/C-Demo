#include<stdio.h> //standard input out 
#include<string.h>
//定义在main函数的变量为全局变量
//
//
//int a=5;
//extern int global; //extern 为引用别的.c文件变量的关键字   
//
//int main()//int 为返回该函数的类型  如果为Int  则返回的类型就为整形  如果为str 则返回就为str类型
//{
//	int a=10;
//	int b;
//	scanf("%d",&b);//&取地址符号，从键盘敲入一个数字 并将数字存入b所对应的地址
//	
//	/*{
//		int c=10;
//		
//	}*/
//	printf("%d\n",a); //当既有局部变量 又有全局变量的时候，优先使用局部变量，但是最好不要定义相同的变量，会导致bug
//	printf("%d",a+b);
//	printf("\n%d\n",sizeof(a));//求该类型的字节数
//	printf("%p\n",a);//打印该变量所存的地址
//	作用域在里面的函数块，在外面打印不了内部函数块
//	printf("%d",c)
//
//	printf("%d",global);
//	return 0;
//
//}


//定义标识符变量
//#define MAX 100
//
//int main()
//{
//	//5 3  1 2 字面常量
//	//int num=4;
//	////修改变量num
//	//num=5;
//	//printf("修改后的num=%d\n",num);
//
//	//const-常属性
//	//const int num1=4;
//	////加了const在前面修饰  则该变量则不能改变了 为常属性变量
//	//num1=5;
//	//printf("修改后的num1=%d\n",num1);
//
//	//int a=5;
//	////前面已经定义了MAX的值为100了 看到MAX就相当于看到100
//	//int sum=MAX+a;
//	//printf("sum=%d\n",sum);
//
//	return 0;
//
//}


//枚举变量  枚举关键字 enum

//enum Sex
//{
//	Male,//自带编号为0
//	Female,//自带编号为1
//	secret,//自带编号为2
//
//};

// Male Female secret 枚举变量

//int main()
//{
//	enum Sex s1=Female;
//	enum Sex s2=Male;
//	printf("s1=%d\n",s1);//1
//	
//	printf("s2=%d\n",s2);//0
//	s1=Male;
//	s2=Female;
//	printf("变化后s1=%d\n",s1);//0
//	//s2=5;  err  枚举里面的默认数值不能变  即Male 0  Female 1   secret 2  不能改变他们的编号
//
//	printf("变化后s2=%d\n",s2);//1
//	printf("Male=%d\n",Male);//0
//	printf("Female=%d\n",Female);//1
//	printf("secret=%d\n",secret);//2
//}
//



//字符串
//
//int main()
//{
//	//char str[]="hello word";
//	//char str1[]={'a','b','c'};
//	//printf("%s\n",str);//hello word     字符串默认在末尾加个'\0'，'\0'字符串结束的标志  但是他不算进去长度
//	//printf("%s\n",str1);//abc烫烫烫烫蘦ello word
//	//printf("%d\n",strlen(str));//10
//	//printf("%d\n",strlen(str1));//随机数值  直到遇到‘\0’
//	//
//	//char str[]="hello word";
//	//char str1[]={'a','b','c','\0'};
//	//printf("%s\n",str);//hello word
//	//printf("%s\n",str1);//abc
//	//printf("%d\n",strlen(str));//10
//	//printf("%d\n",strlen(str1));//3
//	//return 0;
//}

//转义字符

//int main()
//{
//	printf("(are you ok ??)\n");
//	//   出现转义
//	printf("C:\Program Files (x86)\Microsoft Office\Office14\n");//C:Program Files (x86)Microsoft OfficeOffice14
//	//    \转义回来
//	printf("C:\\Program Files (x86)\\Microsoft Office\\Office14\\n\n");//C:\Program Files (x86)\Microsoft Office\Office14\n
//	printf("\32\n");
//	/*  发生转义
//	 \32-32是两个8进制数
//	  两个8进制数换成10进制数所对应的ascii码所对应的特殊字符就为打印的东西
//	  */
//	printf("\x61\n");//'a'
//	//   \x61-61是两个16进制数
//	//   两个16进制数换成10进制数所对应的ascii码所对应的特殊字符就为打印的东西
//	return 0;
//
//}


//选择分支+循环

//
//int main()
//{
//  int i=1;
//  while (1)
// {
//	if (i==1)
//	  {
//		 printf("over\n");
//		i++;
//	  }
//	  else
//	  {
//		  printf("eee\n");
//		  break;
//	  }
//  
//  }
//  
//  return 0;
//
//}



//函数

//定义函数
//int Add(int x,int y)
//{
//	return x+y;
//
//}
//
//int main()
//{
//	int sum;
//	sum=Add(5,6);//调用函数
//	printf("sum=%d\n",sum);
//	return 0;
//}


//数组

//int main()
//{
//	char arr[]={'a','b','c','d','e','f','g','\0'};
//	int i=0;
//	int count=strlen(arr);
//
//	while(i<count)
//	{
//	  printf("%c\n",arr[i]);
//	  i++;
//	
//	}
//
//	return 0;
//
//
//
//
//}


//操作符

/*
算术操作符：+ - * / % 


移位操作符：<<(左移) >>(右移)


位操作符：& ^(异或)相同为0，不同为1， |


赋值操作符：=, +=, -= ,*=, /=, &= , ^= ,|=,	>>=,<<=


单目操作符：!(逻辑反操作)、-（负值）、+(正值)、&（取地址符）、sizeof(操作数的类型长度，单位为byte)
            ~(对一个数按位取反) 、--（前置--或者后置--）、++（前置++或后置++）、
			---类型转换：（类型）xx（所需要转换的数据）


关系操作符：>、>=、<、<=、!=、==

逻辑操作符：&&(逻辑与)、||(逻辑或)
 
条件操作符：exp1?exp2:exp3

逗号表达式：exp1,exp2,exp3,....

下标引用：[]  () .  ->


*/

//算术操作符
//int main()
//{
//	int a,b,Sum,Minu,Muti,Yushu;
//	int Division;
//	float c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	
//	Sum=a+b;
//	Minu=a-b;
//	Muti=a*b;
//	Division=a/b;//取商
//	Yushu=a%b;
//	
//	printf("Sum=%d\n",Sum);
//	printf("Minu=%d\n",Minu);
//	printf("Muti=%d\n",Muti);
//	printf("Division=%d\n",Division);
//	printf("Yushu=%d\n",Yushu);
//	
//	return 0;
//
//}

//int main()
//{
//
//	float a,b,c;
//	
//	a=5.0;
//	b=3.0;
//	c=a/b;
//	printf("c=%f",c);//c=1.666667 为float类型时，为精确除，整型的话 取整数部分
//	return 0;
//}


//位移操作


//int main()
//{
//	int a=5;
//
//	printf("%d\n",a<<3);//a<<3     a*2^3
//
//	printf("%d\n",a>>1);//a>>1     a/2^1
//	return 0;
//
//}


//位操作符

//int main()
//{
//	int a,b;
//	a=5;//0101
//	b=3;//0011
//	
//	printf("%d\n",a&b);//1   0001
//	printf("%d\n",a|b);//7   0111
//	printf("%d\n",a^b);//6   0110
//	return 0;
//}


//赋值操作符


//int main()
//{
//	int a=5;
//	int b=3;
//	int c=0;
//	c=b<<=1;
//	printf("%d",c);
//	return 0;
//
//
//}

//单目运算符
//
//int main()
//{
//	int a=0;
//	int b=5;
//	int c;
//	printf("!a=%d\n",!a);//逻辑反操作
//	printf("%d\n",~b);//~--二进制取反   在屏幕上打印是用的补码
//	//0101   ---反  1010(最高位为1负数)所以补码为:反码1101 补码：1110
//	/*c=++b;	
//	printf("前置c=%d\n",c);*/
//
//	c=b++;
//	printf("后置c=%d\n",c);
//	return 0;
//
//}

//关键字  typedef 有符号  无符号数

//int main()
//{
//	typedef unsigned int u_int;
//	int a=10;
//	u_int b=-2;
//	printf("修改之前%d\n",a);
//	printf("修改之前%u\n",b);//%u 为无符号输出  若定义的是无符号数，若赋值带符号  则会产生随机数
//	a=-20;
//	b=1;
//	printf("修改之后a=%d\n",a);
//	printf("修改之后a=%u\n",b);
//	return 0;
//
//}

//关键字static

//修饰局部变量 局部变量的生命周期变长

//void test()
//{
//    int a=1;
//	printf("test=%d\t",a);//1 1 1 1 1
//	a++;
//	
//
//
//
//}
//void test1()
//{
//	static int a=1;
//	printf("test1=%d\t",a);//1 2 3 4 5
//	a++;
//
//
//
//
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//	test();
//	
//	test1();
//	i++;
//	}
//	return 0;
//}

//修饰全局变量 修改了全局变量的作用域，使得全局变量只能在自己源文件使用，不能被其他源文件引用
//extern  int num1,num;
//int main()
//{
//
//	printf("%d \d",num,num1);//报错   无法解析num1
//	return 0;
//
//}


//修饰函数 改变了函数的链接属性(外部链接属性->内部链接属性)  和修饰全局变量类似，改变了作用域
//extern int Add(int ,int);
//
//extern int Add1(int ,int );
//int main()
//{
//	int sum;
//	//sum=Add(2,3);
//	//printf("%d\n",sum);//5
//
//	sum=Add1(2,3);
//	printf("%d\n",sum);//无法解析外部符号Add1
//	return 0;
//
//}

//define 定义标识符常量和定义宏

//定义标识符常量

//#define MAX 100;
//
//int main()
//{
//	int a;
//	a=MAX;
//	printf("%d\n",a);//100
//	return 0;
//
//}

//定义宏

//#define MAX(X,Y) (X>Y?X:Y)
//
//int Max(int x,int y)
//{
//	if (x>y)
//	{
//	  return x;
//	}
//	return y;
//}
//
//int main()
//{
//	int a,b;
//	//调用函数
//	a=Max(3,5);
//	printf("%d\n",a);//5
//	//宏的方式
//	b=MAX(3,5);
//	printf("%d\n",b);//5
//	return 0;
//
//}




//初识指针变量
//在32位机器上 所有的指针变量(int* char* ....)都占4个字节
//在64位机器上 所有的指针变量(int* char* ....)都占8个字节
//int main()
//{
//	int a=10;
//	int* p=&a;//int* 为整型指针类型变量 用来存放地址
//	printf("%p\n",&a);//00D3FD40
//	printf("%p\n",p);//00D3FD40
//	printf("%d\n",a);//10
//	printf("%d\n",*p);//10   *为解引用符号  就是用来找到p地址里面的数据
//	return 0;
//
//
//}


//初识结构体  关键字struct

struct Book
{
	char name[20];
	int price;

};// ;为结束类型定义


int main()
{
	struct Book book1={"三国演义",55};//定义并赋值
	struct Book* pb=&book1;//定义指针类型 并存放book1的地址

	printf("%s\n",book1.name);
	printf("%d\n",book1.price);
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n",pb->name);//->直接指向地址里面的对象，不用在解引用
	printf("%d\n",pb->price);//->直接指向地址里面的对象，不用在解引用

	book1.price=200;//可以直接修改变量
	printf("%d\n",book1.price);//200
	printf("%d\n",(*pb).price);//200

	//  book1.name="hello";  无法修改里面不是变量的东西   因为数组本身存放的是一个地址
	//借助scrcpy函数来实现
	strcpy(book1.name,"hello");
	printf("%s\n",book1.name);
	printf("%s\n",(*pb).name);
	return 0;



}
