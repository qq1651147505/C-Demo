#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����


//int main()
//{

	//VS�ı�������֧�ֱ�������������������    C99�﷨��׼֧�ֱ䳤���飨�����С�ǳ������߱�����
	// int n=3;
	 //int arr[n]={0};
	//��������ֳ�ʼ��
	//��ȫ��ʼ��
	//int arr[5]={1,2,3,4,5};//1 2 3 4 5
	////����ȫ��ʼ��
	//int arr1[5]={1,2,3};//1 2 3 0 0  ����ȫ��ʼ�� Ĭ�Ϻ���ĩβ��0
	//int arr3[]={1,2,3};// 1 2 3
	//printf("%d %d\n",sizeof(arr)/sizeof(arr[0]),sizeof(arr1)/sizeof(arr1[0]));
	////��ʼ��Ӧע�������
	//char ch1[5]={'b','i','t'};
	//char ch2[]={'b','i','t'};
	//char ch3[]="hello word";
	//printf("%s\n",ch1);//bit     'b ' 'i ' 't'  '\0' '\0'
	//printf("%s\n",ch2);//bit���������bit    'b' 'i' 't'
	//printf("%s\n",ch3);//hello word  'h' 'e' 'l' 'l' 'o' ' ' 'w' 'o' 'r' 'l' 'd' '\0' �ַ���ĩβĬ�ϼ�'\0'
	//printf("%d\n",strlen(ch1));//3    strlen�������ַ������Ȳ���'\0'���ȥ
	//printf("%d\n",strlen(ch2));//���ֵ  ��Ϊ�����������'\0'����ȷ������  
	//printf("%d\n",strlen(ch3));// 10
	//
	/*return 0;*/
//}


//�����ʹ��
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=0;
//	int right;
//	int i;
//	int* p=arr;//  ��������������������Ԫ�صĵ�ַ
//
//	sz=sizeof(arr)/sizeof(arr[0]);//���㳤��
//	right=sz-1;//��ȡ���һ��Ԫ�ص��±�
//	
//	//for(i=0;i<sz;i++)
//	//	{
//	//		printf("%d ",arr[i]);
//	//		printf("&arr[%d]=%p\n",i,&arr[i]);//һά����Ĵ����ַ��������
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
//////		p++;//ָ�������ƶ�
//////		/*
//////		  1 2 3 4 5 6 7 8 9
//////		
//////		*/
////	}
////		
////	return 0;
////}



//��ά����
//
//int main()
//{
	//��ά����Ĵ���
	//int arr[3][5];//������ά����  3��5��
	//��ʼ����ά����
	//char arr1[2][3]={{'a','b'},{'c','d'}};//����ȫ��ʼ��
	///*  arr1[0][0] 'a'     arr1[1][0] 'c' 
	//	arr1[0][1] 'b'	   arr1[1][1] 'd' 
	//	arr1[0][2] '\0'	   arr1[1][2] '\0' 
	//*/
	/*char arr1[][3]={{'a','b'},{'c','d'}};*/  //ʡ�Գ�ʼ��   �п���ʡ�� �в���ʡ��
	///*  arr1[0][0] 'a'     arr1[1][0] 'c' 
	//	arr1[0][1] 'b'	   arr1[1][1] 'd' 
	//	arr1[0][2] '\0'	   arr1[1][2] '\0' 
	//*/
	//char arr2[2][2]={{'a','b'},{'c','d'}}; //��ʼ���ַ�û�д�'\0' �ַ�����ӡ����'\0'�Ż�ֹͣ
	//printf("%s\n",arr2);//abcd������?

	/*char arr2[2][2]={{'a','b'},{'c','\0'}}; */
	/*  
	arr2[0][0]  'a'	     arr2[1][0]  'c'
	arr2[0][1]  'b'		 arr2[1][1]  '\0'   ��Ϊ��ά�������ڴ��еĵ�ַҲ��������һ��� ����������\0��ֹͣ
	
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
////������ά����
//
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//		    //��ӡֵ���ַ
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
//	��ά������ ��ַ����������ʵ���ڴ��У���ά������n��һά����֮�ͣ�
//	��Ҳ����Ϊʲô�в���ʡ�� �п���ʡ�� ��ʡ�ԵĻ��Ҳ�����һ��Ԫ�����ڵĵ�ַ
//
//	*/
//	}
//	return 0;
//
//}


//ָ���������ַ
//int main()
//{
//	int a[][3]={{1,2,3},{4,5,6}};
//	int b[][3]={{1,2,3},{4,5,6}};
//	/*int* p;*/
//	int* p1;
//	int i,j;
//	//p=a;//��ά���鲻��ֱ�Ӵ�������
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

//ð�����򷽷�
//ð������˼�룺������Ƚϣ����ҿ��ܽ��н���
//void Sorted(int arr[],int length)
//{
//	int i,j,temp;
//	int flag=1;//�Ż��㷨 ��־λ�����һ������û�з������� ��û��Ҫ�������������� �Ѿ����������
//	//����ʾѭ������
//	for(i=0;i<length-1;i++)
//	{
//		//�ڲ�ѭ����ʾÿһ����Ҫ�Ƚϵĸ���  ÿ����һ�� ���ų�һ�����������Ҫ�Ƚ��������μ���һ��
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



//��������ʲô
//����������Ԫ�ص�ַ
//������2������
//1 sizeof(������)  ��ʱ��������ʾ��������   
//2 &������     ��ʱ��������ʾ�������� ȡ��������������ĵ�ַ

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