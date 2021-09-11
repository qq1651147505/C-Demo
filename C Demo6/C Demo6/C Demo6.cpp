#include<stdio.h>

//结构体
//结构体的声明
//
//struct Student
//{
//	char name[10];
//	int age;
//	float high;
//	
//}s1,s2;
////这里创建的s1,s2变量为全局变量
//int main()
//{
//
//	//创建结构体变量
//	//这里创建的变量为局部变量
//	struct Student s={"yang",15,170.0};
//	int arr[5]={0};
//	struct Student* ps=&s;
//	//访问结构体的三种方式
//	printf("名字为:%s\n年龄为:%d\n升高为多少里面:%.2f\n",s.name,s.age,s.high);
//	printf("名字为:%s\n年龄为:%d\n升高为多少里面:%.2f\n",(*ps).name,(*ps).age,(*ps).high);
//	printf("名字为:%s\n年龄为:%d\n升高为多少里面:%.2f\n",ps->name,ps->age,ps->high);
//	return 0;
//}

//结构体里面嵌套结构体
//struct Color
//{
//	char color[20];
//	
//};
//
//struct Book
//{
//	char name[10];
//	float price;
//	//结构体里面嵌套结构体
//	struct Color C;
//
//};
//
//
//int main()
//{
//	struct Book b1={"yang",100.0,{"lan"}};
//	struct Book* ps=&b1;
//	//访问结构体的两种方式
//	printf("name:%s\nprince:%f\ncolor:%s\n",b1.name,b1.price,b1.C.color);
//	printf("name:%s\nprince:%f\ncolor:%s\n",ps->name,ps->price,ps->C.color);
//	return 0;
//}


//结构体里面嵌套指针
//struct Node
//{
//	int data;
//	struct Node* Next;
//
//};
//
//int main()
//{
//
//	struct Node n1={20,NULL};
//	printf("data=%d\n%d\n",n1.data,n1.Next);
//	return 0;
//}