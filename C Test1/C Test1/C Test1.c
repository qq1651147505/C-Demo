#include<stdio.h>
#include<string.h>
#include<math.h>
//int sum(int a)
//{
//	int c=0;
//	static int b=3;
//	c+=1;
//	b+=2;
//	return (a+b+c);
//		
//
//}
//
//int main()
//{
//	int i;
//	int a=2;
//	for(i=0;i<5;i++)
//		printf("%d\n",sum(a));
//
//	return 0;
//
//}


//写代码将三个数按从大到小输出
//int main()
//
//{
//	int a,b,c;
//	int temp;
//	printf("请输入三个数字并用空格隔开：>");
//	scanf("%d%d%d",&a,&b,&c);
//	getchar();     //a b c
//	//假设a是最大的  4 3 5
//	
//			if (a < b)
//			{
//				temp=a; 
//				a=b;
//				b=temp;
//			}
//			if (a < c )
//			{
//			  temp=a;//4
//			  a=c;//5
//			  c=temp;//4
//			
//			}
//			if ( b <c )
//			{
//				temp=b;
//				b=c;
//				c=temp;
//			}
//			
//			printf("%d %d %d",a,b,c);
//
//	return 0;
//}

//打印1-100之间三的倍数

//int main()
//{
//	int i,count,n;
//	count =0;
//	printf("请输入要查询1到那个范围内的三的倍数：>");
//	scanf("%d",&n);
//	getchar();
//	for(i=1;i<n;i+=2)//偶数肯定不是三的倍数 所以可以跳过偶数
//	{
//	 if (i % 3 == 0)
//	 { 
//		 count++;
//		 printf("i=%d ",i);
//		 if(11==count)
//			 printf("\n");
//		 
//	 }
//		
//	}
//
//	printf("\n1-%d之间一共有%d个三的倍数\n",n,count);
//	return 0;
//
//}


//给定两个数  求这两个数的最大公因数
//int main()
//{
//	int Num1,Num2,Surplus;
//	printf("请输入所需要求的两个数的最大公因数，并用空格隔开两个数：>");
//	scanf("%d%d",&Num1,&Num2);
//	getchar();
//	while(1)   //辗转相除法求最大公因数
//	{
//		Surplus=Num1 % Num2 ;//余数 
//			if(0 == Surplus)
//			{
//				printf("最大公因数为：%d\n",Num2);
//				break;
//			}
//
//		Num1=Num2;
//		Num2=Surplus;
//		
//
//	
//	}
//	
//
//	return 0;
//
//}

//打印1000~2000年之间的闰年

//int main()
//{
//	int i;
//	int j;
//	int count=0;
//	int k;
//	printf("请输入要查询那个年份到那个年份之间的闰年，并用空格隔开：>");
//	scanf("%d%d",&i,&j);
//	
//	getchar();
//	k=i;
//	//满足是闰年的条件：能整除4 并且不能整除100
//	//                  能整除400
//	for(i;i<j;i++)
//		if((i % 4 ==0 && i %100 !=0) || (i % 400==0))
//			{
//				
//				
//				printf("闰年:%d ",i);
//				count++;
//			}
//			
//
//		printf("\n%d~%d年之间一共有%d个闰年\n",k,j,count);
//	return 0;
//}

//打印给定范围内的素数
//
//int main()
//{
//	int i=0;
//	int j=0;
//	int k;
//	printf("请给定素数范围，并用空格隔开:>");
//	scanf("%d%d",&i,&j);
//	getchar();
//	if ( i % 2 !=0)
//		{
//		for(i;i<j;i+=2)
//		{
//		   for(k=2;k<=sqrt(i);k++)
//		   {
//					if(i%k== 0)
//					{
//						break;
//				
//					}
//		   }
//		
//
//		   if(k > sqrt(i))
//			   printf("%d ",i);
//		
//		}
//	}
//	else
//		for(i;i<j;i+=1)
//	{
//	   for(k=2;k<=sqrt(i);k++)
//	   {
//				if(i%k== 0)
//				{
//					break;
//				
//				}
//	   }
//		
//
//	   if(k > sqrt(i))
//		   printf("%d ",i);
//		
//	}
//
//		
//
//
//	return 0;
//}

//编程算一下 1~100中出现9的个数


//int main()
//{
//	// 根据题意 个位出现9 或者 十位出现9 就是1~100中9出现的个数
//
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//	   if((9==i%10)|| (9==i/10))
//	   {
//			count++;
//			printf("%d ",i);
//	   }
//
//	}
//	printf("\n一共出现9的次数为：%d\n",count);
//
//	return 0;
//}


//分数求和  编写程序进行分数求和(1/1- 1/2+ 1/3- 1/4+....- 1/100)

//int main()
//{
//	//根据题意  我们需要先产生1~100的数字，观察发现  分母为偶数时，分数前面为负号
//	int i=0;
//	int flag=1;//定义分数的符号位
//	float sum=0;
//	int n=0;
//	printf("请输入算1~n交叉数的和：>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		//这里要注意 除法要想产生小数  必须除数和被除数之中，有一个是float类型的数，不然都是整型相除是取商
//		sum=sum+flag*(1.0/i);
//		flag=-flag;
//		
//	}
//	printf("sum=%f\n",sum);
//	return 0;
//
//
//
//}



//给定n个数，求n个数中的最大值

//int main()
//{
//	int i;
//	int arr1[]={-3,-4,-5,-9,-6,-4,-5,-3,-6,-7};
//	int size;//求数组长度  
//	int max;//假设max是最大的数
//	size=sizeof(arr1)/sizeof(arr1[0]);
//	//假设arr1[0]元素是这个数组中最大的数
//	max=arr1[0];
//	for(i=0;i<size;i++)
//	{
//	  if(arr1[i] > max)
//	  {
//		  max=arr1[i];
//	  }
//	
//	}
//	printf("max=%d\n",max);
//	return 0;
//}


//从屏幕从输出一个9*9乘法口诀表

//int main()
//{
//	int i=0;
//	int j=0;
//	//想要输出一个乘法口诀表，需要做到外层循环控制行，内层循环控制列，并且一次大的外层循环完，换一次行
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//编写一个代码在一个整型有序数组中查找具体的某个数    用二分法查找(有序) 效率高  
//找到就打印下标，找不到则输出：找不到
//int main()
//{
//	int arr1[]={3,5,7,9,10,11,15,16,18,19,21,22,35};
//	int left=0; //左坐标
//	int right=0;//右坐标
//	int mid=0; //中间坐标
//	int k=0;;//需要查找的数
//	printf("请输入要查找的数:>");
//	scanf("%d",&k);
//	getchar();
//	right=sizeof(arr1)/sizeof(arr1[0])-1;//sizeof算出来个数把'\0'包括进去
//	while(left <= right)
//	{
//		mid=(left+right)/2;
//		if(arr1[mid] < k)
//		{
//		   left=mid;
//		   mid++;
//			
//		}
//		if(arr1[mid] > k)
//		{
//			right=mid;
//			right--;
//		}
//		if(arr1[mid]==k)
//		{
//			printf("下标为:%d\n",mid);
//			break;
//		}
//		
//	}
//	if(left > right)
//		printf("没找到！\n");
//
//
//	return 0;
//}


//求一元二次方程的根  求根公式法求
//int JugeAIsZero(float a,float b,float c,float Delta 	)
//{
//	float X1;
//	float X2;
//	//fabs(a)<1e-6  判断a的绝对值是否为0
//	if(fabs(a)<1e-6)
//	{
//		if(fabs(b)<1e-6)
//		{
//			printf("没有结果，既不是二元一次方程也不是一元一次方程\n");
//		}
//		else
//		{
//			printf("一元一次方程的结果：%.2f\n",-c/b);//保留2位小数
//			
//		}
//	
//	}
//	else
//	{
//		Delta=b*b-4*a*c;
//		if(Delta>0)
//		{
//			X1=(sqrt(Delta)-b)/(2*a);
//			X2=(-(b+sqrt(Delta)))/(2*a);
//			printf("两个实数根为:%.2f %.2f\n",X1,X2);
//			
//		}
//		else if(Delta==0)
//		{
//			X1=X2=(sqrt(Delta)-b)/(2*a);
//			X2=(-(b+sqrt(Delta)))/(2*a);
//			printf("两个相等实数根为:%.2f %.2f\n",X1,X2);
//		}
//		else
//		{
//			printf("没有实数根\n");
//		}
//	
//	}
//	
//}
//
//int main()
//{
//	float a,b,c,Delta;	
//	Delta=0.0;
//				
//	printf("请分别输入二次项、一次项、常数项的系数:>");
//	scanf("%f%f%f",&a,&b,&c);
//	/*printf("%.2f%.2f%.2f\n",a,b,c);*/
//	getchar();
//	//判断是否符合一元二次方程
//	//如果二次项的系数为0，一次项系数也为0 则无结果，
//	//如果二次项的系数为0.一次项系数不为0，则一元二次方程变成一元一次方程
//	JugeAIsZero(a,b,c,Delta);
//	return 0;
//
//}
