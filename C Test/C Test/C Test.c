#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
//计算n的阶层

//
//int main()
//{
//	//n!  1*2*3*4*5*6*7*8*9*...
//	int n;
//	int i;
//	int  Calculate=1;
//	
//	
//	
//	printf("请输入给定需要算那个数的阶层:>");
//	scanf("%d",&n);
//	
//	getchar();
//	
//	finish=clock()-start;
//	for(i=1;i<n+1;i++)
//	{
//		Calculate=Calculate*i;//1 2 6 
//	
//	}
//	
//	
//	printf("n的阶层为：%d\n",Calculate);
//	return 0;
//
//}

//int frequency_of_primes (int n) {
//  int i,j;
//  int freq=n-1;
//  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
//  return freq;
//}
//
//int main ()
//{
//  clock_t t;
//  int f;
//  
//  t = clock();
//  printf("%d\n",t);
//  printf ("Calculating...\n");
//
//  f = frequency_of_primes (99999);
//  printf ("The number of primes lower than 100,000 is: %d\n",f);
//  t = clock() - t;
//  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
//  return 0;
//}

//用函数封装
//
//int Step(int x)//传入需要算那个数的阶层
//{
//	int i;
//	int Calculate=1;
//	for(i=1;i<x+1;i++)
//	{
//		Calculate=Calculate*i;
//	
//	}
//
//	
//	return Calculate;
//
//}
//
//int main()
//{
//	int n;
//	int Rec;//接收函数的返回值
//	printf("请输入给定需要算那个数的阶层:>");
//	scanf("%d",&n);
//	getchar();
//
//	Rec=Step(n);
//	printf("n的阶层为:%d\n",Rec);
//
//	return 0;
//}


//计算阶层的累加和


//int main()
//{
//	//1!+2!+3!+...+n!
//	int n;
//	int i;
//	int Calculate=1;
//	int sum=0;
//	printf("请输入给定需要算那个数的阶层:>");
//	scanf("%d",&n);
//	getchar();
//	for(i=1;i<n+1;i++)
//	{
//		Calculate=Calculate*i;
//		sum=sum+Calculate;
//	}
//
//	printf("n的阶层为：%d\n",Calculate);
//	printf("n的阶层累加和为：%d\n",sum);
//	return 0;
//
//
//}

//在一个有序的数组中查找具体的某个数字n
//int test(int* arr1,int i,int k)
//{
//	for(i=0;i<sizeof(arr1)/sizeof(arr1[0])-2;i++)
//	{
//		if (arr1[i]== k )
//			return i;
//	
//	}
//	
//}
//int main()
//{
//	int  arr1[]={1,2,3,4,5,6,7,9,10};//给定一个特定的数组
//	int k=5;//假设要查找的数字是5
//	int i=0;
//	int n;
//	clock_t start,finish;
//	start=clock();
//	n=test(arr1,i,k);
//	printf("%d\n",n);
//	//strlen 只能继续字符串的长度
//	//迭代法查找数组中某个数字   题目标识了有序   所以我们可以采用折半查找法查找  效率更高
//	
//	finish=clock()-start;
//	printf("t=%d  second=%f\n",start,((float)finish / CLOCKS_PER_SEC));
//	return 0;
//}

//折半查找法 查询一个给定数组中的有序序列
//int main()
//{
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int left;//左下标
//	int right;//数组最大长度右下标
//	int mid;//数组中间元素坐标
//	left = 0;
//	/*scanf("%d",&k);
//	getchar();*/
//	right=(sizeof(arr1)/sizeof(arr1[0]))-1;//获取数组最大长度的下标
//	printf("%d\n",right);
//	/*mid = (left+right)/2;*///获取中间元素的下标
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if (arr1[mid] > k)
//		{
//			right=mid-1;
//	
//		}
//		else if (arr1[mid] < k)
//		{
//		 
//			left=mid+1;
//			
//		}
//		else
//			{
//				printf("找到了下标是：%d\n",mid);
//				break;
//			}
//		
//
//	}
//	if (left > right)
//		printf("找不到\n");
//
//	return 0;
//}


//编写代码实现多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[]="abcde";
//	char arr2[]="#####";
//	int left =0;
//	int right=0;//获取元组种最后一个数的下标
//	//printf("strlength=%d\n",strlen(arr1));//5  strlen算字符串长度的时候，算到'\0'之前的
//	//printf("sizeof=%d\n",sizeof(arr1)/sizeof(arr1[0]));//6   sizeof算字符串的长度的时候，把'\0'也算进去了
//	right=strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(100);//头文件是windows.h Sleep(时间 单位毫秒)
//	
//	}
//
//	// a####e  ab#de abcde 
//	
//
//
//
//	return 0;
//
//}


//编写代码实现用户登录
//
//int main()
//{
//	char account[16]={0};
//	char password[16]={0};
//	int count;
//	printf("请输入要登陆的账号和密码：>");
//	
//	for(count=1;count<4;count++)
//	{   scanf("%s%s",account,password);
//		getchar();
//		/*printf("%s %s\n",account,password);*/
//		//==不能用来比较两个字符串是否相等  应该使用一个库函数 strcmp   对比一样返回0
//		if ((strcmp(account,"admin123") ==0 )&&( strcmp(password,"123456") == 0) )
//		{
//			printf("登录成功！\n");
//			break;
//	
//		}
//		else
//		{
//		  if (count==3)
//			  break;
//		printf("请重新输入账号和密码:>");
//		  
//		  continue;
//		}
//	
//	}
//	
//	return 0;
//
//}

//#include<stdio.h>
//#include<time.h>
//clock_t start, stop; //clock_t为clock()函数返回的变量类型
//double duration;
//int main()
//{
//	int i;
//    start=clock();
//    //******************************
//    //*这里写你所要测试运行时间的程序 * 
//    //******************************
//	//时间太短的话 返回值是0 clock
//	for (i=0;i<1000000000;i++)
//	{
//			;
//	}
//    stop=clock();
//    duration=(double)(stop-start)/CLK_TCK; //CLK_TCK为clock()函数的时间单位，即时钟打点
//    printf("%f\n",duration);
//    return 0;
//
//}