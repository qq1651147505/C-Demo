#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//
//int main()
//{
//	//�ַ�ָ�룬��������ַ��ĵ�ַ  ��һ���÷�
//	/*char ch='a';
//	char *pc=&ch;
//
//	printf("%p,%p,%c\n",&ch,pc,*pc);
//*/
//	//�ַ�ָ��ڶ����÷�
//	//�����ǰ��ַ��������ַ���ַ����ָ������ȥ�ˣ������ǰ��ַ������ݷŵ��ַ�ָ������ȥ
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
//	//�����ַ���	  �������޸ģ��ڴ���ֻ���һ��  ���ܶ�*str=xxx  ���в���
//	char *str="abc def";
//	//�����ʵ��д��Ϊ
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


//ָ������ ������ָ��  ָ�����飺���ָ�������  ����ָ�룺������������ַ
//int main()
//{
//	////һ��ָ������
//	//int* arr[5];
//	////����ָ������  
//	//int** arr1[5];
//	////����ָ������
//	//int*** arr2[5];
//
//	//ָ������
//	//ָ�������һ���÷�
//	/*
//	
//	00DDF990 00DDF984 00DDF978
//	00DDF990
//	00DDF984
//	00DDF978
//	
//	*/
//	//a  �� b  ����ͬһ���ڴ棬��Ȼ��ֵͬһ������
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
//	//ָ������ڶ����÷�
//
//	int a[]={1,2,3,4,5};
//	int b[]={6,7,8,9,10};
//	int c[]={11,12,13,14,15};
//	int i;
//	int j;
//	//ֱ�ӷ���������������Ԫ�ص�ַ
//	//num[0] �ҵ�������a����Ԫ�صĵ�ַ
//	int* num[3]={a,b,c};
//	for(i=0;i<3;i++)
//	{
//	  for(j=0;j<5;j++)
//	  {
//		//printf("%d",*(num[i]+j));     num[i]�õ�ĳ��������Ԫ�صĵ�ַ   num[i]+j��ʾ��������Ԫ�ص�ַ����λ�� 
//		//*(num[i]+j) ��ʾ��������Ԫ�ص�ַ����λ�ƽ��н����ò������õ����������
//	    printf("%d\n",num[i][j]);
//	  }
//	
//	}
//
//
//	return 0;
//}


//����ָ�룺ָ�������ָ��

//int main()
//{ 
	//ָ������
	//int* p[10];

	//int arr[10]={0};
	////����ָ��  :ָ�������ָ��
	//int (*arrp)[10]=&arr;
	////&arrȡ��������������ĵ�ַ��Ҳ����Ԫ�ص�ַ�� arr+1�Ļ� ֱ�����������������ֽ�         
	////arrֱ�Ӵ�������Ԫ�ص�ַ arr+1����һ��Ԫ�ص��ֽ�
	//printf("%p %p\n",arr,arrp);//0135FB5C 0135FB5C
	//printf("%p %p\n",arr+1,arrp+1);//0135FB60 0135FB84
	
	//int arr[5]={1,2,3,4,5};
	////��������ʹ��
	//int (*arrp)[5]=&arr;
	//int i=0;
	//for(i=0;i<5;i++)
	//{
	//	//arrpָ�����飬*arrp�����ã��õ�������
	//  printf("%d\n",*((*arrp)+i));
	//
	//}

	//�����÷�
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	int (*arrp)[5]=arr;
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//	
//		for(j=0;j<5;j++)
//		{
//		  //��ӡ����
//		 
//
//			printf("%d\n",*((*(arrp+i))+j));
//		}
//	}
//	return 0;
//}


//int (*p[10])[5];
//p��һ����������ָ������飬�������ܴ��10������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int ��

//һά����Ĵ��ν��յļ��ַ�ʽ
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
//	//���������ŵ���int
//	int arr[3]={1,2,3};
//	
//	int a=0,b=1,c=2;
//	//���������ŵ���int*
//	int* arr1[3]={&a,&b,&c};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	
//	
//	//��������Ԫ�ص�ַ��printf1Ҳ�����������
//	//printf0(arr,sz);
//	//printf1(arr,sz);
//	////��������Ԫ�ص�ַ��printf1Ҳ��������ָ����ս���
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
//	//���������ŵ���int
//	int arr[3]={1,2,3};
//	int i;
//	int a=0,b=1,c=2;
//	//���������ŵ���int*
//	int* arr1[3]={&a,&b,&c};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	/*int (*arr11)[3]=&arr;*/

//	//�����&arr1û����;
//	/*int*  (*arr22)[3]=&arr1;
//	
//	
//	  printf("%d\n",*((**arr22)));*/
//	
//	//for(i=0;i<sz;i++)
//	//{
//	//  
//	// //*arr11�����û�������� **arr11�ٽ����� �������  
//	//  printf("%d\n",*((*arr11)+i));
//	//}
//	return 0;
//}


//��ά���鴫��  ���ֽӷ�
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
//	//����ȥ������Ԫ�ص�ַ��Ҳ���Ǵ�����һά����arr[0]��ַ
//	printf1(arr,sz,3);
//	printf2(arr,sz,3);
//	printf3(arr,sz,3);
//	
//	return 0;
//}


//һ�� ����ָ�봫��
//void printf1(int* *p1,int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		//*p1�õ�����ָ��p  (*p1)+i)��pָ������ƶ�    (*(*p1)+i)����pָ������ò������õ�����
//	  printf("%d\n",(*(*p1)+i));
//	
//	}
//
//
//}
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	//p��һ��һ��ָ��
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


//����ָ��  ��ź�����ַ��ָ����
//int Add(int x,int y)
//{
//
//	return x+y;
//
//}
//int main()
//{
//
//	//���岢��ʼ��һ��ָ�룬��ź�����ַ
//	int (*p)(int ,int )=&Add;
//	int (*p1)(int ,int )=Add;  //Add =p1     Add�൱�ڵ�ַ  p1����Ҳ�Ǵ�ŵ�ַ  ���� int ret2=p1(3,5);
//	//&Add  ��  Addû���𣬶���������������ַ  ��ͬ������
//	// *p�����õõ�������
//	int ret=(*p)(3,5);
//	int ret1=(*p1)(3,5);
//	int ret2=p1(3,5);
//	printf("%p %p \n",Add,&Add);//00401217 00401217
//	printf("%p %p\n",p,p1);// 00401217 00401217
//	printf("%d %d %d\n",ret,ret1,ret2); // 8 8 8
//	return 0;
//}


//�������

//  (*(void (*)())0) ();
// void (*)() ����ָ������
// (void (*)())0  ��0ת�ɺ���ָ����ʽ
//(*(void (*)())0) ��0��ַ���н����ò���
//(*(void (*)())0) () ����0��ַ���ĺ���


// void ( * vosignal (int ,id(*)(int) ) )(int)
//void ( *  )(int)
//����ָ��Ƕ�׺���ָ��
// signal�Ǻ�����  ���ú���
// signal (int ,void(*)(int) )  ���ú��� ��һ������������int �ڶ������������Ǻ���ָ��
// signal (int ,void(*)(int) ) 
//  signal������������Ҳ��һ������ָ��
//�ú���ָ�룬ָ��һ��int ,��������Ϊvoid ����
//void ( * signal (int ,void(*)(int) ) )(int) Ϊ��������


//����ָ������ ������ź���ָ�������


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
//	// int arr[2]={0} arr������ int [2]  ��������    ����Ԫ�����ͣ�int 
//	//p1������  int (*[2])(int ,int )��������  ����Ԫ������:int (*)(int ,int )
//	int (*p1[2])(int ,int )={Add,Sub};
//	//int ret1=(*p1)(3,5);  //�����������ַ�����ȡ���ݣ�����ָ����� p1�������Add�ĵ�ַ  ��*p1�����õõ�Add  
//	//int ret2=(*(p1+1))(3,5);
//	int ret3=p1[0](3,5);
//	int ret4=p1[1](3,5);
//	//printf("%d %d %d %d\n",ret1,ret2,ret3,ret4);//8 -2 8 -2
//	printf("%d %d \n",ret3,ret4);
//	return 0;
//}

//���ú���ָ��ʵ�ּ�����
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
//	   printf("���������ʲô������>");
//	   scanf("%d",&input);
//	  if(input >=1 && input <=4)
//	  {
//		float ret=0;
//	    printf("����������������:>");
//	    scanf("%d %d",&x,&y);
//	    ret =p1[input](x,y);
//		printf("%.1f\n",ret);
//	  }
//	  else if(input==0)
//	  {
//		  printf("�˳�����\n");
//		  break;
//	  }
//		  
//	  else
//	  {
//	     printf("������ѡ��\n");
//	  
//	  }
//	}
//	while(input);
//
//return 0;
//}



//ָ����ָ�������ָ��
//ָ��ָ�����飬�����������ź���ָ��
//int Add(int x,int y)
//{
//
//	return x+y;
//}
//�򵥽��ܺ���ָ�������ָ�룬�����ã�����̫�����
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




//�ص�����
//ͨ������ָ����õĺ����������Ѻ�����ָ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ��
//���Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ����һ����һ����
//���е��á�

//�򵥺����ص�����
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

//���ûص�����ʵ����������


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
//	printf("����������������:>");
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
//		printf("��������Ҫ���еĲ���:>");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 0:printf("�˳�����\n");break;
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
//				printf("����Ƿ�������������\n");
//				break;
//		}
//	
//	}
//	while(input);
//
//
//	return 0;
//}

//ð������ع�
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
//	printf("����ǰ!\n");
//	for(i=0;i<sz;i++)
//	{
//	
//	  printf("%d ",arr[i]);
//	}
//	sort1(arr,sz);
//	printf("\n�����!\n");
//	for(i=0;i<sz;i++)
//	{
//	
//	  printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//qsort����ʵ��

//qsort�������ĸ����� �����뿴����
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
//ʹ��qsort����
//�Զ�������

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
//	printf("����ǰ!\n");
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


//����ð������ķ���ʵ��һ��qsort����
//��������Ԫ�صĵ�ַ
void swap(char *p1,char *p2,int width)
{ 
	//widthΪ����Ƚ����͵��ֽڴ�С����Ϊchar* �ƶ���ʱ��ֻһ��һ���ֽڣ����Դ����ֽڴ�С������ÿ�ΰ�λ���н�������
	int i;
	for(i=0;i<width;i++)
	{
		//��� ��ͬΪ0 ��ͬΪ1    a=a^b;     b=a^b=a^b^b=a^0=a      a=a^a^b=0^b=b
	    *p1=(*p1)^(*p2);
		*p2=(*p1)^(*p2);
		*p1=(*p1)^(*p2);
		p1++;
		p2++;
	}

}
//��Ϊ��֪������������ʲô�������� ������void*
//void *base ������Ԫ�ص�ַ
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
//		 //�ж������������͵Ĵ�С  ��Ϊ��֪����������ʲô�������ͽ������������������͵Ĵ��뽻������Ա
//		 //com��һ������ָ�룬 ��ָ��ĺ����᷵�� 1 0 -1    e1 > e2 return > 0����     e1==e2 ����0  e1<e2  return < 0����
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