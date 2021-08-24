#include<stdio.h>
#include<string.h>

//if 语句  基础三种形式
//形式1
//int main()
//{
//	int a=90;
//	if (a>=90)//条件为真进入if语句
//	{
//	  printf("你真棒！\n");
//	}
//	
//
//
//
// return 0;
//}

//形式2

//int main()
//{
//	int a=90;
//	if (a>90)//条件满足进入if语句
//	{
//	  printf("你真棒！\n");
//	}
//	else//条件不满足 走else语句
//	{
//	  printf("还没达到要求,请继续努力！\n");
//	}
//
//
//
// return 0;
//}

//形式3

//int main()
//{
//	int a=80;
//	if (60==a)//条件满足进入if语句    当代码块里面只有一句语句的时候，可以省略不写{}
//	{ 
//	  printf("刚刚及格\n");
//	}
//	else if (a > 60 && a <=70)
//	{
//		printf("继续努力\n");  
//	}
//	else if(a >70 && a<= 80)
//	{
//		printf("良好！\n");
//	}
//	else
//	{
//	  printf("无法判断！\n");
//	}
//
// return 0;
//}

//if 语句的嵌套
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
//			  printf("成绩优秀!\n");
//			  break;
//			}
//			else if (a <90 )
//			{
//				printf("成绩良好!\n");
//				break;
//			}
//		}
//		else if (a>=0 && a < 60)
//		{
//		 printf("成绩不及格\n");
//		 break;
//		}
//		else
//		{
//			printf("输入成绩错误，请从新输入!\n");
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

//if 语句匹配原则

//int main()
//{
//	int a=0;
//	int b=2;
//	if (1==a)
//		if (2==b)
//			printf("hehe\n");
//	//else 
//	//	printf("haha\n"); //这里不会打印任何东西  因为不加{} else 会与最近的if匹配
//
//		else
//			printf("haha\n");//这种写法和上面的写法一样
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
//		printf("haha\n");//输出haha   加了{}关系明了  else匹配的是外层if
//	}
//	//else
//	//	printf("haha\n");//当代码块一句只有一句的时候 可以省略{}
//	//	
//	
//
//	return 0;
//}



//switch 语句  常用于多分之语句

//int main()
//{
//	int count;
//
//	scanf("%d",&count);
//	//"里面控制着输入格式" example:"%d%d" 输入两个整型，默认空格隔开，
//	//"%d,%d" 输入两个整型 用,隔开
//	switch(count)
//	{

//	// case 后面跟整型变量
//	/*case 1:
//		printf("星期一\n");
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期日\n");*/
//	/*
//			5
//		星期五
//		星期六
//		星期日
//		没有berak的话 从5的入口进去 并不会停止语句的执行，会继续执行下面的case 6  7  
//	*/
//
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	
//	}
//	//只会具体输出某一天 example：3  星期三
//	
//	return 0;
//
//}
//


//switch语句省略写法

//int main()
//{
//	int count;
//	scanf("%d",&count);
//	switch (count)//count 为语句的入口
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日!\n");
//			break; //break 为跳出switch语句
//		case 6:
//		case 7:
//			printf("休息日!\n");
//			break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int count;
//	scanf("%d",&count);
//	switch (count)//count 为语句的入口
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日!\n");
//			break; //break 为跳出switch语句
//		case 6:
//		case 7:
//			printf("休息日!\n");
//			break;
//
//
//		default://无法匹配走default 语句
//			printf("输入错误!\n");
//			break;
//	}
//
//	return 0;
//}


//switch 语句嵌套

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