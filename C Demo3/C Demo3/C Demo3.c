#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//数组


//int main()
//{

	//VS的编译器不支持变量放在数组括号里面    C99语法标准支持变长数组（数组大小是常量或者变量）
	// int n=3;
	 //int arr[n]={0};
	//数组的两种初始化
	//完全初始化
	//int arr[5]={1,2,3,4,5};//1 2 3 4 5
	////不完全初始化
	//int arr1[5]={1,2,3};//1 2 3 0 0  不完全初始化 默认后面末尾加0
	//int arr3[]={1,2,3};// 1 2 3
	//printf("%d %d\n",sizeof(arr)/sizeof(arr[0]),sizeof(arr1)/sizeof(arr1[0]));
	////初始化应注意的问题
	//char ch1[5]={'b','i','t'};
	//char ch2[]={'b','i','t'};
	//char ch3[]="hello word";
	//printf("%s\n",ch1);//bit     'b ' 'i ' 't'  '\0' '\0'
	//printf("%s\n",ch2);//bit烫烫烫烫蘠it    'b' 'i' 't'
	//printf("%s\n",ch3);//hello word  'h' 'e' 'l' 'l' 'o' ' ' 'w' 'o' 'r' 'l' 'd' '\0' 字符串末尾默认加'\0'
	//printf("%d\n",strlen(ch1));//3    strlen（）算字符串长度不把'\0'算进去
	//printf("%d\n",strlen(ch2));//随机值  因为这个数组里面'\0'不明确在哪里  
	//printf("%d\n",strlen(ch3));// 10
	//
	/*return 0;*/
//}


//数组的使用
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=0;
//	int right;
//	int i;
//	int* p=arr;//  数组名在这里是数组首元素的地址
//
//	sz=sizeof(arr)/sizeof(arr[0]);//计算长度
//	right=sz-1;//获取最后一个元素的下标
//	
//	//for(i=0;i<sz;i++)
//	//	{
//	//		printf("%d ",arr[i]);
//	//		printf("&arr[%d]=%p\n",i,&arr[i]);//一维数组的储存地址是连续的
//
//	//		/*
//	//		1 &arr[0]=00BEFC14
//	//		2 &arr[1]=00BEFC18
//	//		3 &arr[2]=00BEFC1C
//	//		4 &arr[3]=00BEFC20
//	//		5 &arr[4]=00BEFC24
//	//		6 &arr[5]=00BEFC28
//	//		7 &arr[6]=00BEFC2C
//	//		8 &arr[7]=00BEFC30
//	//		9 &arr[8]=00BEFC34			*/
//	//}
//////
//////	for(i=0;i<sz;i++)
//////	{
//////		printf("%d ",*p);
//////		p++;//指针往后移动
//////		/*
//////		  1 2 3 4 5 6 7 8 9
//////		
//////		*/
////	}
////		
////	return 0;
////}



//二维数组
//
//int main()
//{
	//二维数组的创建
	//int arr[3][5];//创建二维数组  3行5列
	//初始化二维数组
	//char arr1[2][3]={{'a','b'},{'c','d'}};//不完全初始化
	///*  arr1[0][0] 'a'     arr1[1][0] 'c' 
	//	arr1[0][1] 'b'	   arr1[1][1] 'd' 
	//	arr1[0][2] '\0'	   arr1[1][2] '\0' 
	//*/
	/*char arr1[][3]={{'a','b'},{'c','d'}};*/  //省略初始化   行可以省略 列不能省略
	///*  arr1[0][0] 'a'     arr1[1][0] 'c' 
	//	arr1[0][1] 'b'	   arr1[1][1] 'd' 
	//	arr1[0][2] '\0'	   arr1[1][2] '\0' 
	//*/
	//char arr2[2][2]={{'a','b'},{'c','d'}}; //初始化字符没有带'\0' 字符串打印看到'\0'才会停止
	//printf("%s\n",arr2);//abcd烫烫跳?

	/*char arr2[2][2]={{'a','b'},{'c','\0'}}; */
	/*  
	arr2[0][0]  'a'	     arr2[1][0]  'c'
	arr2[0][1]  'b'		 arr2[1][1]  '\0'   因为二维数组在内存中的地址也是连着在一起的 所以遇到‘\0‘停止
	
	*/
	//printf("%s\n",arr2);//abc
	///*printf("%s\n",arr1);*/
	
//
//	return 0;
//}


//int main()
//{
//	int num1[][4]={{1,2,3,4},{2,3,5,6}};
//	int num2[][5]={{1,2,3,4},{2,3,5,6}};
//	char arr[][2]={{'a','b'},{'c'}};
//	int length=sizeof(num1)/sizeof(num1[0][0]);
//	int length1=sizeof(num1);
//	int length2=sizeof(arr)/sizeof(arr[0][0]);
//	int length3=sizeof(arr);
//	int length4=sizeof(num2)/sizeof(num2[0][0]);
//	int length5=sizeof(num2);
//	int i,j;
//	printf("%d %d\n",length,length1);//8 32
//	printf("%d %d\n",length2,length3);	//4 4
//	printf("%d %d\n",length4,length5);//10 40
////遍历二维数组
//
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//		    //打印值与地址
//			printf("%d %p\n",num1[i][j],&num1[i][j]);
//		}
//		printf("\n");
//	/*
//	1 0093F8A0
//	2 0093F8A4
//	3 0093F8A8
//	4 0093F8AC
//
//	2 0093F8B0
//	3 0093F8B4
//	5 0093F8B8
//	6 0093F8BC
//	
//	二维数组中 地址是连续的真实在内存中，二维数组是n个一维数组之和，
//	这也就是为什么列不能省略 行可以省略 列省略的话找不到下一个元素所在的地址
//
//	*/
//	}
//	return 0;
//
//}


//指针拿数组地址
//int main()
//{
//	int a[][3]={{1,2,3},{4,5,6}};
//	int b[][3]={{1,2,3},{4,5,6}};
//	/*int* p;*/
//	int* p1;
//	int i,j;
//	//p=a;//二维数组不能直接传数组名
//	p1=&a[0][0];
//	for(i=0;i<6;i++)
//	{
//	
//		printf("%d\n",*p1);//1 2 3 4 5 6
//		p1++;
//
//	}
//	return 0;
//}

//冒泡排序方法
//冒泡排序思想：两两相比较，并且可能进行交换
//void Sorted(int arr[],int length)
//{
//	int i,j,temp;
//	int flag=1;//优化算法 标志位，如果一趟下来没有发生交换 就没必要继续进行排序了 已经是有序的了
//	//外层表示循环趟数
//	for(i=0;i<length-1;i++)
//	{
//		//内层循环表示每一趟需要比较的个数  每经过一趟 能排出一个最大数，需要比较数就依次减少一个
//		for(j=0;j<length-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				temp=arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=temp;
//				flag=0;
//			}
//
//
//
//		}
//		if(1==flag)
//			break;
//
//
//	}
//	for(i=0;i<length;i++)
//		printf("%d ",arr[i]);
//}
//
//int main()
//{
//	int num1[10]={23,45,6,3,5,4,11,23,63,9};
//	int length=sizeof(num1)/sizeof(num1[0]);
//	int i;
//	Sorted(num1,length);
//	
//	return 0;
//}



//数组名是什么
//数组名是首元素地址
//但是有2个例外
//1 sizeof(数组名)  此时数组名表示整个数组   
//2 &数组名     此时数组名表示整个数组 取出的是整个数组的地址

int main()
{
	int num[10]={0};
	
	printf("%p\n",&num);
	printf("%p\n",num);
	printf("%p\n",&num[0]);
	printf("%p\n",&num);
	printf("%p\n",&num+1);
	printf("%p\n",num);
	printf("%p\n",num+1);
	return 0;
}