#include<stdio.h>

//�ṹ��
//�ṹ�������
//
//struct Student
//{
//	char name[10];
//	int age;
//	float high;
//	
//}s1,s2;
////���ﴴ����s1,s2����Ϊȫ�ֱ���
//int main()
//{
//
//	//�����ṹ�����
//	//���ﴴ���ı���Ϊ�ֲ�����
//	struct Student s={"yang",15,170.0};
//	int arr[5]={0};
//	struct Student* ps=&s;
//	//���ʽṹ������ַ�ʽ
//	printf("����Ϊ:%s\n����Ϊ:%d\n����Ϊ��������:%.2f\n",s.name,s.age,s.high);
//	printf("����Ϊ:%s\n����Ϊ:%d\n����Ϊ��������:%.2f\n",(*ps).name,(*ps).age,(*ps).high);
//	printf("����Ϊ:%s\n����Ϊ:%d\n����Ϊ��������:%.2f\n",ps->name,ps->age,ps->high);
//	return 0;
//}

//�ṹ������Ƕ�׽ṹ��
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
//	//�ṹ������Ƕ�׽ṹ��
//	struct Color C;
//
//};
//
//
//int main()
//{
//	struct Book b1={"yang",100.0,{"lan"}};
//	struct Book* ps=&b1;
//	//���ʽṹ������ַ�ʽ
//	printf("name:%s\nprince:%f\ncolor:%s\n",b1.name,b1.price,b1.C.color);
//	printf("name:%s\nprince:%f\ncolor:%s\n",ps->name,ps->price,ps->C.color);
//	return 0;
//}


//�ṹ������Ƕ��ָ��
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