#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//
//int main()
//{
//	//字符指针，用来存放字符的地址  第一种用法
//	/*char ch='a';
//	char *pc=&ch;
//
//	printf("%p,%p,%c\n",&ch,pc,*pc);
//*/
//	//字符指针第二种用法
//	//这里是把字符串的首字符地址传到指针里面去了，并不是把字符串内容放到字符指针里面去
//	/* 
//		abc def a
//		a
//		b
//		c
//
//		d
//		e
//		f
//		*/
//	//常量字符串	  不允许被修改，内存中只存放一份  不能对*str=xxx  进行操作
//	char *str="abc def";
//	//上面的实际写法为
//	//const char  *str;
//	printf("%s %c\n",str,*str);
//	while(*str!=0)
//	{
//	
//	  printf("%c\n",*str);
//	  str++;
//	}
//	return 0;
//}


//指针数组 与数组指针  指针数组：存放指针的数组  数组指针：用来存放数组地址
//int main()
//{
//	////一级指针数组
//	//int* arr[5];
//	////二级指针数组  
//	//int** arr1[5];
//	////三级指针数组
//	//int*** arr2[5];
//
//	//指针数组
//	//指针数组第一种用法
//	/*
//	
//	00DDF990 00DDF984 00DDF978
//	00DDF990
//	00DDF984
//	00DDF978
//	
//	*/
//	//a  与 b  不是同一块内存，虽然赋值同一个数字
//	//int a=2;
//	//int b=2;
//	//int c=4;
//	//int i;
//	//int*  arr[3]={&a,&b,&c};
//	////char ch='b';
//	////char ch1='b';
//	////
//	////printf("%p %p\n",&ch,&ch1);  //0019FA9F 0019FA93
//	////ch='c';
//	////printf("%p %p\n",&ch,&ch1);  //0019FA9F 0019FA93
//	//printf("%p %p %p\n",&a,&b,&c);
//
//	//for(i=0;i<3;i++)
//	//{
//	//  printf("%p\n",arr[i]);
//	//}
//
//	//指针数组第二种用法
//
//	int a[]={1,2,3,4,5};
//	int b[]={6,7,8,9,10};
//	int c[]={11,12,13,14,15};
//	int i;
//	int j;
//	//直接放数组名是数组首元素地址
//	//num[0] 找到的数组a中首元素的地址
//	int* num[3]={a,b,c};
//	for(i=0;i<3;i++)
//	{
//	  for(j=0;j<5;j++)
//	  {
//		//printf("%d",*(num[i]+j));     num[i]得到某个数组首元素的地址   num[i]+j表示对数组首元素地址进行位移 
//		//*(num[i]+j) 表示对数组首元素地址进行位移进行解引用操作，得到里面的数据
//	    printf("%d\n",num[i][j]);
//	  }
//	
//	}
//
//
//	return 0;
//}


//数组指针：指向数组的指针

//int main()
//{ 
	//指针数组
	//int* p[10];

	//int arr[10]={0};
	////数组指针  :指向数组的指针
	//int (*arrp)[10]=&arr;
	////&arr取出的是整个数组的地址（也是首元素地址） arr+1的话 直接跳过数组里面总字节         
	////arr直接传的是首元素地址 arr+1跳过一个元素的字节
	//printf("%p %p\n",arr,arrp);//0135FB5C 0135FB5C
	//printf("%p %p\n",arr+1,arrp+1);//0135FB60 0135FB84
	
	//int arr[5]={1,2,3,4,5};
	////很少这样使用
	//int (*arrp)[5]=&arr;
	//int i=0;
	//for(i=0;i<5;i++)
	//{
	//	//arrp指向数组，*arrp解引用，拿到数组名
	//  printf("%d\n",*((*arrp)+i));
	//
	//}

	//常用用法
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	int (*arrp)[5]=arr;
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//	
//		for(j=0;j<5;j++)
//		{
//		  //打印上面
//		 
//
//			printf("%d\n",*((*(arrp+i))+j));
//		}
//	}
//	return 0;
//}


//int (*p[10])[5];
//p是一个储存数组指针的数组，该数组能存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int 型

//一维数组的传参接收的几种方式
//void printf0(int arr1[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",arr1[i]);
//	}
//
//}
//
//void printf1(int arr1[3],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",arr1[i]);
//	}
//
//}
//void printf2(int *arr2,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",*(arr2+i));
//		
//	}
//
//}
//void printf3(int* arr[3],int sz1)
//{
//	int i;
//	for(i=0;i<sz1;i++)
//	{
//	 printf("%d\n",*(arr[i]));
//	
//	}
//
//}
//void printf4(int* arr[],int sz1)
//{
//	int i;
//	for(i=0;i<sz1;i++)
//	{
//	 printf("%d\n",*(arr[i]));
//	
//	}
//
//}
//void printf5(int* *p,int sz1)
//{
//	int i=0;
//	for(i=0;i<sz1;i++)
//	{
//	printf("%d\n",*(*(p+i)));
//	
//	}
//	
//}
//
//int main()
//{
//	//数组里面存放的是int
//	int arr[3]={1,2,3};
//	
//	int a=0,b=1,c=2;
//	//数组里面存放的是int*
//	int* arr1[3]={&a,&b,&c};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	
//	//传数组首元素地址，printf1也是用数组接收
//	//printf0(arr,sz);
//	//printf1(arr,sz);
//	////传数组首元素地址，printf1也是用整型指针接收接收
//	//printf2(arr,sz);
//
//	printf3(arr1,3);
//	printf4(arr1,3);
//	printf5(arr1,3);
//	
//	return 0;
//}




//int main()
//{
//	//数组里面存放的是int
//	int arr[3]={1,2,3};
//	int i;
//	int a=0,b=1,c=2;
//	//数组里面存放的是int*
//	int* arr1[3]={&a,&b,&c};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	/*int (*arr11)[3]=&arr;*/

//	//下面的&arr1没有用途
//	/*int*  (*arr22)[3]=&arr1;
//	
//	
//	  printf("%d\n",*((**arr22)));*/
//	
//	//for(i=0;i<sz;i++)
//	//{
//	//  
//	// //*arr11解引用获得数组名 **arr11再解引用 获得数据  
//	//  printf("%d\n",*((*arr11)+i));
//	//}
//	return 0;
//}


//二维数组传参  几种接法
//void printf1(int arr1[2][3],int x,int y )
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void printf2(int arr1[][3],int x,int y )
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void printf3(int (*p1)[3],int x,int y)
//{
//	int i;
//	int j;
//	for(i=0;i<x;i++)
//	{
//	 for(j=0;j<y;j++)
//	 {
//		printf("%d ",(*(*(p1+i)+j)));
//	 }
//	 printf("\n");
//	}
//
//
//}
//
//
//int main()
//{ 
//	
//	int arr[2][3]={{1,2,3},{4,5,6}};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	/*printf("%d\n",sz);*/
//	//传过去数组首元素地址，也就是传的是一维数组arr[0]地址
//	printf1(arr,sz,3);
//	printf2(arr,sz,3);
//	printf3(arr,sz,3);
//	
//	return 0;
//}


//一级 二级指针传参
//void printf1(int* *p1,int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		//*p1得到的是指针p  (*p1)+i)：p指针进行移动    (*(*p1)+i)：对p指针解引用操作，得到数据
//	  printf("%d\n",(*(*p1)+i));
//	
//	}
//
//
//}
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	//p是一个一级指针
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i;
//	/*for(i=0;i<sz;i++)
//	{
//		printf("%d\n",*(p+i));
//	}*/
//	printf1(&p,sz);
//	return 0;
//}


//函数指针  存放函数地址的指针下
//int Add(int x,int y)
//{
//
//	return x+y;
//
//}
//int main()
//{
//
//	//定义并初始化一个指针，存放函数地址
//	int (*p)(int ,int )=&Add;
//	int (*p1)(int ,int )=Add;  //Add =p1     Add相当于地址  p1里面也是存放地址  所以 int ret2=p1(3,5);
//	//&Add  与  Add没区别，都是用来传函数地址  不同与数组
//	// *p解引用得到函数名
//	int ret=(*p)(3,5);
//	int ret1=(*p1)(3,5);
//	int ret2=p1(3,5);
//	printf("%p %p \n",Add,&Add);//00401217 00401217
//	printf("%p %p\n",p,p1);// 00401217 00401217
//	printf("%d %d %d\n",ret,ret1,ret2); // 8 8 8
//	return 0;
//}


//代码分析

//  (*(void (*)())0) ();
// void (*)() 函数指针类型
// (void (*)())0  把0转成函数指针形式
//(*(void (*)())0) 对0地址进行解引用操作
//(*(void (*)())0) () 调用0地址处的函数


// void ( * vosignal (int ,id(*)(int) ) )(int)
//void ( *  )(int)
//函数指针嵌套函数指针
// signal是函数名  调用函数
// signal (int ,void(*)(int) )  调用函数 第一个参数类型是int 第二个参数类型是函数指针
// signal (int ,void(*)(int) ) 
//  signal函数返回类型也是一个函数指针
//该函数指针，指向一个int ,返回类型为void 函数
//void ( * signal (int ,void(*)(int) ) )(int) 为函数声明


//函数指针数组 用来存放函数指针的数组


//int Add(int x ,int y )
//{
//	
//	return x+y;
//
//}
//int Sub(int x,int y)
//{
//
//	return x-y;
//
//}
//int main()
//{   
//	// int arr[2]={0} arr数组名 int [2]  数组类型    数组元素类型：int 
//	//p1数组名  int (*[2])(int ,int )数组类型  数组元素类型:int (*)(int ,int )
//	int (*p1[2])(int ,int )={Add,Sub};
//	//int ret1=(*p1)(3,5);  //不建议用这种方法获取数据，易与指针混淆 p1储存的是Add的地址  ，*p1解引用得到Add  
//	//int ret2=(*(p1+1))(3,5);
//	int ret3=p1[0](3,5);
//	int ret4=p1[1](3,5);
//	//printf("%d %d %d %d\n",ret1,ret2,ret3,ret4);//8 -2 8 -2
//	printf("%d %d \n",ret3,ret4);
//	return 0;
//}

//利用函数指针实现计算器
//float Add(int x,int y)
//{
//	return x+y;
//
//}
//float Sub(int x,int y)
//{
//
//	return x-y;
//}
//float Mul(int x,int y)
//{
//
//	return x*y;
//}
//
//float  Div( int x, int y)
//{
//	
//	return (float)x/y;
//
//}
//void Menu()
//{
//	printf("***************\n");
//	printf("*****0 Exit****\n");
//	printf("*****1 Add*****\n");
//	printf("*****2 Sub*****\n");
//	printf("*****3 Mul*****\n");
//	printf("*****4 Div*****\n");
//	printf("***************\n");
//}
//int main()
//{
//	int x=0;
//	int y=0;
//	int input=0;
//	float (*p1[5])(int ,int )={NULL,Add,Sub,Mul,Div};
//	
//	do
//	{
//	
//	   Menu();
//	   printf("请输入进行什么操作：>");
//	   scanf("%d",&input);
//	  if(input >=1 && input <=4)
//	  {
//		float ret=0;
//	    printf("请输入两个操作数:>");
//	    scanf("%d %d",&x,&y);
//	    ret =p1[input](x,y);
//		printf("%.1f\n",ret);
//	  }
//	  else if(input==0)
//	  {
//		  printf("退出程序\n");
//		  break;
//	  }
//		  
//	  else
//	  {
//	     printf("请重新选择\n");
//	  
//	  }
//	}
//	while(input);
//
//return 0;
//}



//指向函数指针数组的指针
//指针指向数组，数组里面存放着函数指针
//int Add(int x,int y)
//{
//
//	return x+y;
//}
//简单介绍函数指针数组的指针，不常用，不用太过于深究
//int main()
//{
//
//	int (*p)(int ,int)=Add;
//	
//	int (*p1[1])(int ,int )={Add};
//
//	int (*(*p2[10]))(int ,int)={p1};
//
//	int ret=p(3,5);
//	int ret1=p1[0](3,5);
//	int ret2=(*p2)[0](3,5);
//	printf("%d %d %d\n",ret,ret1,ret2);
//	return 0;
//}




//回调函数
//通过函数指针调用的函数。如果你把函数的指针作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时。
//我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时另外一个的一方，
//进行调用。

//简单函数回调例子
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Call(int (*p1)(int ,int  ))
//{
//
//	return p1(3,5);
//}
//int main()
//{
//	int (*p)(int,int)=Add;
//
//	int ret=p(3,5);
//	int ret1=Call(p);
//	printf("%d %d\n",ret,ret1);
//	return 0;
//}

//利用回调函数实现算术功能


//float Add(int x,int y)
//{
//	return x+y;
//
//}
//float Sub(int x,int y)
//{
//
//	return x-y;
//}
//float Mul(int x,int y)
//{
//
//	return x*y;
//}
//
//float   Div( int x, int y)
//{
//	
//	return (float)x/y;
//
//}
//void Menu()
//{
//	printf("***************\n");
//	printf("*****0 Exit****\n");
//	printf("*****1 Add*****\n");
//	printf("*****2 Sub*****\n");
//	printf("*****3 Mul*****\n");
//	printf("*****4 Div*****\n");
//	printf("***************\n");
//}
//float Call(float (*p1)(int ,int  ))
//{
//	int x=0;
//	int y=0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d",&x,&y);
//
//	return p1(x,y);
//}
//
//int main()
//{
//	int input=0;
//	
//	float ret=0;
//	
//	do{
//		int x=0;
//		int y=0;
//		Menu();
//		printf("请输入需要进行的操作:>");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 0:printf("退出程序\n");break;
//
//			case 1:
//				   ret=Call(Add);
//				   printf("%d\n",(int) ret);
//				   break;
//			case 2:
//				   ret=Call(Sub);
//				   printf("%d\n",(int) ret);
//				   break;
//			case 3:
//				   ret=Call(Mul);
//				   printf("%d\n",(int) ret);
//				   break;
//			case 4:
//				   ret=Call(Div);
//				   printf("%.1f\n",ret);
//				   break;
//			default:
//				printf("输入非法，请重新输入\n");
//				break;
//		}
//	
//	}
//	while(input);
//
//
//	return 0;
//}

//冒泡排序回顾
//void sort1(int *p,int sz)
//{
//	int i=0;
//	int j=0;
//	int temp=0;
//	for(i=0;i<sz;i++)
//	{
//	 for(j=0;j<sz-1-i;j++)
//	 {
//	   if(*(p+j) >*(p+j+1))
//	   {
//	       temp=*(p+j);
//		   *(p+j)=*(p+j+1);
//		   *(p+j+1)=temp;
//	   }
//	 }
//	}
//}
//int main()
//{
//	int arr[10]={9,8,7,6,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	printf("排序前!\n");
//	for(i=0;i<sz;i++)
//	{
//	
//	  printf("%d ",arr[i]);
//	}
//	sort1(arr,sz);
//	printf("\n排序后!\n");
//	for(i=0;i<sz;i++)
//	{
//	
//	  printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//qsort函数实现

//qsort函数有四个参数 详情请看官网
/*
void qsort (void* base, size_t num, size_t size,
            int (*compar)(const void*,const void*));

base
Pointer to the first object of the array to be sorted, converted to a void*.	

num
Number of elements in the array pointed to by base.
size_t is an unsigned integral type.

size
Size in bytes of each element in the array.
size_t is an unsigned integral type.

compar
Pointer to a function that compares two elements.
This function is called repeatedly by qsort to compare two elements. It shall follow the following prototype:
 
int compar (const void* p1, const void* p2);

Taking two pointers as arguments (both converted to const void*). The function defines the order of the elements by returning (in a stable and transitive manner):
return value	meaning
<0	The element pointed to by p1 goes before the element pointed to by p2
0	The element pointed to by p1 is equivalent to the element pointed to by p2
>0	The element pointed to by p1 goes after the element pointed to by p2

*/
//使用qsort排序
//自定义排序

//int my_compar (const void* p1, const void* p2)
//
//{
//	return *((int *)p1) -*((int *)p2);
//
//}
//struct stu
//{
//	int age;
//	char name[20];
//};
//int my_compar1 (const void* p1, const void* p2)
//{
//	return ((struct stu *)p1)->age -((struct stu *)p2)->age;
//}
//void printf1(int arr[],int sz)
//{
//	int i;
//	printf("排序前!\n");
//	for(i=0;i<sz;i++)
//	{
//	  printf("%d ",arr[i]);
//	
//	}
//	printf("\n");
//	;
//	for(i=0;i<sz;i++)
//	{
//	  printf("%d ",arr[i]);
//	
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	int i=0;
//	struct stu s[3]={{17,"lima"},{15,"haws"},{20,"nisa"}};
//	
//	printf("%d\n",sz);
//	qsort(arr,10,4,my_compar);
//	printf1(arr,sz);
//	qsort(s,3,sizeof(s[0]),my_compar1);
//	for(i=0;i<3;i++)
//	{
//	
//
//		printf("%d ",s[i].age);
//	}
//	printf("\n");
//	return 0;
//}


//利用冒泡排序的方法实现一个qsort函数
//接收两个元素的地址
void swap(char *p1,char *p2,int width)
{ 
	//width为传入比较类型的字节大小，因为char* 移动的时候只一个一个字节，所以传入字节大小，方便每次按位进行交换变量
	int i;
	for(i=0;i<width;i++)
	{
		//异或 相同为0 不同为1    a=a^b;     b=a^b=a^b^b=a^0=a      a=a^a^b=0^b=b
	    *p1=(*p1)^(*p2);
		*p2=(*p1)^(*p2);
		*p1=(*p1)^(*p2);
		p1++;
		p2++;
	}

}
//因为不知道传进来的是什么数据类型 所以用void*
//void *base 接收首元素地址
//void my_qsort (void *base,int sz, int width,
//            int (*com)(const void *e1,const void *e2))
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz-1;i++)
//	{
//	
//	 for(j=0;j<sz-i-1;j++)
//		{
//		 //判断两个数据类型的大小  因为不知道这里面会对什么数据类型进行排序，所将排序类型的传入交给程序员
//		 //com是一个函数指针， 所指向的函数会返回 1 0 -1    e1 > e2 return > 0的数     e1==e2 返回0  e1<e2  return < 0的数
//		 if(com((char *)base+j*width , (char *)base+(j+1)*width) > 0)
//			{
//		 
//			 swap((char *)base+j*width,(char *)base+(j+1)*width,width) ;
//
//			}
//		 
//		}
//
//	}
//}
//int my_compar (const void* e1, const void* e2)
//
//{   /*printf("%d\n",*((int *)e1) -*((int *)e2));*/
//	return *((int *)e1) -*((int *)e2);
//
//}
//
//int main()
//{
//	int arr[10]={5,16,7,9,8,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	my_qsort(arr,sz,sizeof(arr[0]),my_compar);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}