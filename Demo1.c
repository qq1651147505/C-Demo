#include<stdio.h> //standard input out 
#include<string.h>
//������main�����ı���Ϊȫ�ֱ���
//
//
//int a=5;
//extern int global; //extern Ϊ���ñ��.c�ļ������Ĺؼ���   
//
//int main()//int Ϊ���ظú���������  ���ΪInt  �򷵻ص����;�Ϊ����  ���Ϊstr �򷵻ؾ�Ϊstr����
//{
//	int a=10;
//	int b;
//	scanf("%d",&b);//&ȡ��ַ���ţ��Ӽ�������һ������ �������ִ���b����Ӧ�ĵ�ַ
//	
//	/*{
//		int c=10;
//		
//	}*/
//	printf("%d\n",a); //�����оֲ����� ����ȫ�ֱ�����ʱ������ʹ�þֲ�������������ò�Ҫ������ͬ�ı������ᵼ��bug
//	printf("%d",a+b);
//	printf("\n%d\n",sizeof(a));//������͵��ֽ���
//	printf("%p\n",a);//��ӡ�ñ�������ĵ�ַ
//	������������ĺ����飬�������ӡ�����ڲ�������
//	printf("%d",c)
//
//	printf("%d",global);
//	return 0;
//
//}


//�����ʶ������
//#define MAX 100
//
//int main()
//{
//	//5 3  1 2 ���泣��
//	//int num=4;
//	////�޸ı���num
//	//num=5;
//	//printf("�޸ĺ��num=%d\n",num);
//
//	//const-������
//	//const int num1=4;
//	////����const��ǰ������  ��ñ������ܸı��� Ϊ�����Ա���
//	//num1=5;
//	//printf("�޸ĺ��num1=%d\n",num1);
//
//	//int a=5;
//	////ǰ���Ѿ�������MAX��ֵΪ100�� ����MAX���൱�ڿ���100
//	//int sum=MAX+a;
//	//printf("sum=%d\n",sum);
//
//	return 0;
//
//}


//ö�ٱ���  ö�ٹؼ��� enum

//enum Sex
//{
//	Male,//�Դ����Ϊ0
//	Female,//�Դ����Ϊ1
//	secret,//�Դ����Ϊ2
//
//};

// Male Female secret ö�ٱ���

//int main()
//{
//	enum Sex s1=Female;
//	enum Sex s2=Male;
//	printf("s1=%d\n",s1);//1
//	
//	printf("s2=%d\n",s2);//0
//	s1=Male;
//	s2=Female;
//	printf("�仯��s1=%d\n",s1);//0
//	//s2=5;  err  ö�������Ĭ����ֵ���ܱ�  ��Male 0  Female 1   secret 2  ���ܸı����ǵı��
//
//	printf("�仯��s2=%d\n",s2);//1
//	printf("Male=%d\n",Male);//0
//	printf("Female=%d\n",Female);//1
//	printf("secret=%d\n",secret);//2
//}
//



//�ַ���
//
//int main()
//{
//	//char str[]="hello word";
//	//char str1[]={'a','b','c'};
//	//printf("%s\n",str);//hello word     �ַ���Ĭ����ĩβ�Ӹ�'\0'��'\0'�ַ��������ı�־  �����������ȥ����
//	//printf("%s\n",str1);//abc���������hello word
//	//printf("%d\n",strlen(str));//10
//	//printf("%d\n",strlen(str1));//�����ֵ  ֱ��������\0��
//	//
//	//char str[]="hello word";
//	//char str1[]={'a','b','c','\0'};
//	//printf("%s\n",str);//hello word
//	//printf("%s\n",str1);//abc
//	//printf("%d\n",strlen(str));//10
//	//printf("%d\n",strlen(str1));//3
//	//return 0;
//}

//ת���ַ�

//int main()
//{
//	printf("(are you ok ??)\n");
//	//   ����ת��
//	printf("C:\Program Files (x86)\Microsoft Office\Office14\n");//C:Program Files (x86)Microsoft OfficeOffice14
//	//    \ת�����
//	printf("C:\\Program Files (x86)\\Microsoft Office\\Office14\\n\n");//C:\Program Files (x86)\Microsoft Office\Office14\n
//	printf("\32\n");
//	/*  ����ת��
//	 \32-32������8������
//	  ����8����������10����������Ӧ��ascii������Ӧ�������ַ���Ϊ��ӡ�Ķ���
//	  */
//	printf("\x61\n");//'a'
//	//   \x61-61������16������
//	//   ����16����������10����������Ӧ��ascii������Ӧ�������ַ���Ϊ��ӡ�Ķ���
//	return 0;
//
//}


//ѡ���֧+ѭ��

//
//int main()
//{
//  int i=1;
//  while (1)
// {
//	if (i==1)
//	  {
//		 printf("over\n");
//		i++;
//	  }
//	  else
//	  {
//		  printf("eee\n");
//		  break;
//	  }
//  
//  }
//  
//  return 0;
//
//}



//����

//���庯��
//int Add(int x,int y)
//{
//	return x+y;
//
//}
//
//int main()
//{
//	int sum;
//	sum=Add(5,6);//���ú���
//	printf("sum=%d\n",sum);
//	return 0;
//}


//����

//int main()
//{
//	char arr[]={'a','b','c','d','e','f','g','\0'};
//	int i=0;
//	int count=strlen(arr);
//
//	while(i<count)
//	{
//	  printf("%c\n",arr[i]);
//	  i++;
//	
//	}
//
//	return 0;
//
//
//
//
//}


//������

/*
������������+ - * / % 


��λ��������<<(����) >>(����)


λ��������& ^(���)��ͬΪ0����ͬΪ1�� |


��ֵ��������=, +=, -= ,*=, /=, &= , ^= ,|=,	>>=,<<=


��Ŀ��������!(�߼�������)��-����ֵ����+(��ֵ)��&��ȡ��ַ������sizeof(�����������ͳ��ȣ���λΪbyte)
            ~(��һ������λȡ��) ��--��ǰ��--���ߺ���--����++��ǰ��++�����++����
			---����ת���������ͣ�xx������Ҫת�������ݣ�


��ϵ��������>��>=��<��<=��!=��==

�߼���������&&(�߼���)��||(�߼���)
 
������������exp1?exp2:exp3

���ű��ʽ��exp1,exp2,exp3,....

�±����ã�[]  () .  ->


*/

//����������
//int main()
//{
//	int a,b,Sum,Minu,Muti,Yushu;
//	int Division;
//	float c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	
//	Sum=a+b;
//	Minu=a-b;
//	Muti=a*b;
//	Division=a/b;//ȡ��
//	Yushu=a%b;
//	
//	printf("Sum=%d\n",Sum);
//	printf("Minu=%d\n",Minu);
//	printf("Muti=%d\n",Muti);
//	printf("Division=%d\n",Division);
//	printf("Yushu=%d\n",Yushu);
//	
//	return 0;
//
//}

//int main()
//{
//
//	float a,b,c;
//	
//	a=5.0;
//	b=3.0;
//	c=a/b;
//	printf("c=%f",c);//c=1.666667 Ϊfloat����ʱ��Ϊ��ȷ�������͵Ļ� ȡ��������
//	return 0;
//}


//λ�Ʋ���


//int main()
//{
//	int a=5;
//
//	printf("%d\n",a<<3);//a<<3     a*2^3
//
//	printf("%d\n",a>>1);//a>>1     a/2^1
//	return 0;
//
//}


//λ������

//int main()
//{
//	int a,b;
//	a=5;//0101
//	b=3;//0011
//	
//	printf("%d\n",a&b);//1   0001
//	printf("%d\n",a|b);//7   0111
//	printf("%d\n",a^b);//6   0110
//	return 0;
//}


//��ֵ������


//int main()
//{
//	int a=5;
//	int b=3;
//	int c=0;
//	c=b<<=1;
//	printf("%d",c);
//	return 0;
//
//
//}

//��Ŀ�����
//
//int main()
//{
//	int a=0;
//	int b=5;
//	int c;
//	printf("!a=%d\n",!a);//�߼�������
//	printf("%d\n",~b);//~--������ȡ��   ����Ļ�ϴ�ӡ���õĲ���
//	//0101   ---��  1010(���λΪ1����)���Բ���Ϊ:����1101 ���룺1110
//	/*c=++b;	
//	printf("ǰ��c=%d\n",c);*/
//
//	c=b++;
//	printf("����c=%d\n",c);
//	return 0;
//
//}

//�ؼ���  typedef �з���  �޷�����

//int main()
//{
//	typedef unsigned int u_int;
//	int a=10;
//	u_int b=-2;
//	printf("�޸�֮ǰ%d\n",a);
//	printf("�޸�֮ǰ%u\n",b);//%u Ϊ�޷������  ����������޷�����������ֵ������  �����������
//	a=-20;
//	b=1;
//	printf("�޸�֮��a=%d\n",a);
//	printf("�޸�֮��a=%u\n",b);
//	return 0;
//
//}

//�ؼ���static

//���ξֲ����� �ֲ��������������ڱ䳤

//void test()
//{
//    int a=1;
//	printf("test=%d\t",a);//1 1 1 1 1
//	a++;
//	
//
//
//
//}
//void test1()
//{
//	static int a=1;
//	printf("test1=%d\t",a);//1 2 3 4 5
//	a++;
//
//
//
//
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//	test();
//	
//	test1();
//	i++;
//	}
//	return 0;
//}

//����ȫ�ֱ��� �޸���ȫ�ֱ�����������ʹ��ȫ�ֱ���ֻ�����Լ�Դ�ļ�ʹ�ã����ܱ�����Դ�ļ�����
//extern  int num1,num;
//int main()
//{
//
//	printf("%d \d",num,num1);//����   �޷�����num1
//	return 0;
//
//}


//���κ��� �ı��˺�������������(�ⲿ��������->�ڲ���������)  ������ȫ�ֱ������ƣ��ı���������
//extern int Add(int ,int);
//
//extern int Add1(int ,int );
//int main()
//{
//	int sum;
//	//sum=Add(2,3);
//	//printf("%d\n",sum);//5
//
//	sum=Add1(2,3);
//	printf("%d\n",sum);//�޷������ⲿ����Add1
//	return 0;
//
//}

//define �����ʶ�������Ͷ����

//�����ʶ������

//#define MAX 100;
//
//int main()
//{
//	int a;
//	a=MAX;
//	printf("%d\n",a);//100
//	return 0;
//
//}

//�����

//#define MAX(X,Y) (X>Y?X:Y)
//
//int Max(int x,int y)
//{
//	if (x>y)
//	{
//	  return x;
//	}
//	return y;
//}
//
//int main()
//{
//	int a,b;
//	//���ú���
//	a=Max(3,5);
//	printf("%d\n",a);//5
//	//��ķ�ʽ
//	b=MAX(3,5);
//	printf("%d\n",b);//5
//	return 0;
//
//}




//��ʶָ�����
//��32λ������ ���е�ָ�����(int* char* ....)��ռ4���ֽ�
//��64λ������ ���е�ָ�����(int* char* ....)��ռ8���ֽ�
//int main()
//{
//	int a=10;
//	int* p=&a;//int* Ϊ����ָ�����ͱ��� ������ŵ�ַ
//	printf("%p\n",&a);//00D3FD40
//	printf("%p\n",p);//00D3FD40
//	printf("%d\n",a);//10
//	printf("%d\n",*p);//10   *Ϊ�����÷���  ���������ҵ�p��ַ���������
//	return 0;
//
//
//}


//��ʶ�ṹ��  �ؼ���struct

struct Book
{
	char name[20];
	int price;

};// ;Ϊ�������Ͷ���


int main()
{
	struct Book book1={"��������",55};//���岢��ֵ
	struct Book* pb=&book1;//����ָ������ �����book1�ĵ�ַ

	printf("%s\n",book1.name);
	printf("%d\n",book1.price);
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n",pb->name);//->ֱ��ָ���ַ����Ķ��󣬲����ڽ�����
	printf("%d\n",pb->price);//->ֱ��ָ���ַ����Ķ��󣬲����ڽ�����

	book1.price=200;//����ֱ���޸ı���
	printf("%d\n",book1.price);//200
	printf("%d\n",(*pb).price);//200

	//  book1.name="hello";  �޷��޸����治�Ǳ����Ķ���   ��Ϊ���鱾���ŵ���һ����ַ
	//����scrcpy������ʵ��
	strcpy(book1.name,"hello");
	printf("%s\n",book1.name);
	printf("%s\n",(*pb).name);
	return 0;



}
