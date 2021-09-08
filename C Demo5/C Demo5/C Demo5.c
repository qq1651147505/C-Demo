#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


//初阶指针存放的是什么   指针类型不同有什么区别
//int main()
//{
//	//int a=5;
//	////指针是用来存放一个变量的地址的
//	//int* p=&a; //拿到的是四个字节中的第一个字节的地址
//	////打印a的地址
//	//printf("%p\n",p);
//	//指针的大小，指针在32位平台下大小统一为4字节，在64位平台下，大小统一为8字节
//	/*int a=0x11223344;*/
//	//1、指针的类型决定了修改的权限大小，如果用char类型指针变量接整型变量地址，并不会都修改四个字节的内容，只会修改
//	//一个字节的内容，打开调试窗口即可看到
//	/*char* pc= &a;
//
//	*pc=0;*/
//	//2、指针类型决定了指针走一步，能走多元
//	//int arr[10]={0};
//	//int* pb=arr;
//	//char*  pb1=arr;
//	//
//	//printf("%p\n",pb); //009BF7C8     整型指针走一步，走了四个字节
//	//printf("%p\n",pb+1);//009BF7CC
//	//printf("%p\n",pb1); // 009BF7C8   字符指针走一步，走了一个字节
//	//printf("%p\n",pb1+1);//009BF7C9  //如果需要对每一个字节进行操作，可以选择用char* 类型接收
//	/*
//	
//	009BF7C8
//	009BF7CC
//	009BF7C8
//	009BF7C9
//	
//	*/
//	return 0;
//
//}



//指针移动的意义

//int main()
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int* pb=arr;
//	int i;
//	int sz;
//	sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//	
//		printf("%d\n",arr[i]);
//
//
//		printf("%d\n",*(pb+i));//指针的移动，就是访问某个元素的地址，要访问第几个元素，就要i=n-1
//	
//	}
//
//	printf("\n");
//	for(i=0;i<sz;i++)
//	{
//	 通过移动指针，修改数组里面的值
//	  *(pb+i)=1;
//	
//	}
//	打印修改数组后的值
//	for(i=0;i<sz;i++)
//	{
//	
//		printf("%d\n",*(pb+i));
//	}
//	return 0;
//}


//野指针

//int main()
//{
//	//指针未初始化
//	//int *p;
//	////1、指针未初始化 会导致指针指向的内存地址不明确  非法访问内存  这就是野指针
//	//*p=20;
//
//	//printf("%d\n",*p);
//
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int* pb=arr;
//	int i;
//	int sz;
//	sz=sizeof(arr)/sizeof(arr[0]);
//	//sz最大为10 而指针访问数组最多访问到第10个元素，sz最大为10时，已经访问第11个元素了，越界访问，也是野指针
//	
//	for(i=0;i<=sz;i++)
//	{
//		
//		*pb=i;
//		pb++;
//	}
//
//	return 0;
//}


/*
避免野指针：
			1、指针初始化
			2、小心指针越界
			3、指针指向空间释放，即时值NULL
			4、指针使用之前检查有效性
*/
//下面也是个野指针的例子，a的生命周期一结束，操作系统就会回收这块内存

//int* test()
//{
//	 int a=5;
//
//	return &a;
//}
//
// 
//int main()
//{
//	int* pb;
//	pb=test();
//	*pb=2;
//
//	printf("%p %d\n",pb,*pb);
//
//
//	return 0;
//}


//指针运算 
//指针+ - 整数   指针的关系运算
//int main()
//{
//	int num[10]={0};
//	int* pb;
//	int i;
//	int sz=sizeof(num)/sizeof(num[0]);
//	//指针 + -表示走几步     指针<一个地址， 关系运算
//	for(pb=&num[0];pb<&num[10];)
//	{
//	     *pb++=1;
//		 
//		
//	
//	}
//	pb=num;
//	for(i=0;i<sz;i++)
//	{
//	
//		printf("%d\n",*(pb+i));
//	
//	}
//
//	return 0;
//}



//指针-指针
//
//int main()
//{
//	int num[6]={0,1,2,3,4,5};
//	int* p;
//	int* p1;
//	p=num;
//	p1=&num[4];
//	//两指针相减的前提：两指针指向同一块内存
//	//指针-指针表示 两个指针之间有几个元素
//	printf("%d\n",p1-p);
//
//
//	return 0;
//}


//指针和数组
//int main()
//{
//	int num[10]={0};
//	int i;
//	int* pb=num;
//	int sz=sizeof(num)/sizeof(num[0]);
//	//打印数组名其实就是打印数组首元素的地址
//	printf("%p\n",num);
//
//	printf("%p\n",&num[0]);
//	for(i=0;i<sz;i++)
//	{
//		printf("%p\n",&num[i]);
//		printf("%p\n",pb+i);
//	}
//	//下面的操作都可以访问数组的第一个元素值
//	printf("%d\n",num[1]);
//	printf("%d\n",1[num]);
//	printf("%d\n",*(num+1));
//	printf("%d\n",*(pb+1));
//	printf("%d\n",pb[1]);
//	printf("%d\n",1[pb]);
//	return 0;
//}


//二级指针
//int main()
//{
//	int a=5;
//	//声明一种int类型的指针变量
//	int* pb;
//	//声明一种int* 类型的指针变量
//	int** pb1;
//	pb=&a;
//	pb1=&pb;
//	printf("%p\n",&a);
//	printf("%p,%d\n",pb,*(pb));
//	printf("%p,%d\n",pb1,**(pb1));
//
//	/*printf("%p,%d\n",pb1,*(pb1));*/
//
//	return 0;
//}