#include<stdio.h>
#include<string.h>

//������



//���������� + - * / %
//��Ҫ��ϰ / %
//int main()
//{
//	// % ȡ�����   �������߶�����������
//	int ret,ret1,ret2;
//	float ret3;
//	ret=2 % 5;
//	ret1=6 % 5;
//	ret2= 5 / 3;
//	ret3=5.0/3;
//	printf("ret=%d\nret1=%d\n",ret,ret1);// 2   1
//
//	// / ����  �������߶������������Ϊ�̣�Ҫ���������㣬�������߱���������һ����float or double ��������
//
//	
//	printf("ret2=%d\nret3=%f\n",ret2,ret3);// ret2=1  ret3=1.666667
//	return 0;
//}


//��λ������(�Զ����ƽ�����λ)  << >>

//int  main()
//{
//	int a=4;
//	int new1,new2,new3;
//	int b=-4;
//	
//	//���ƣ�����������ұ߲�0(���Ʋ����������� or  �߼����� )
//	
//
//
//	new1=a<<2;
//
//	//4�Ķ�����:00000000000000000000000000000100
//	//���ƣ�    00000000000000000000000000010000
//	//���Ƽ��㷨��a* 2^n�η�(nΪ���Ƶ���)
//	printf("new1=%d\n",new1);
//
//	//���Ʒ�Ϊ����������(����ǰ�油����λ) ��  �߼����ƶ�(����ǰ�油0)    VS��������Ĭ����������
//	//ʵ����Ҳ���ǵ��Ƿ�������ʱ�򣬷��������� �� �߼�����
//
//	new2=a>>2;
//	//4�Ķ�����:00000000000000000000000000000100
//	//���ƣ�    00000000000000000000000000000001
//	// �������������Ƽ��㷨:a / 2^n�η�(nΪ���Ƶ���)
//	printf("new2=%d\n",new2);
//
//
//	new3=b>>2;
//	//-4�Ķ�����:10000000000000000000000000000100  ԭ��
//	//	-4��	 11111111111111111111111111111011  ����
//	//	-4��	 11111111111111111111111111111100  ����
//	//��������ڴ��еļ��㶼�ǲ��ò������ʽ��������ԭ�� ���� ���� ��һ��
//	// ���ƺ�:   11111111111111111111111111111111
//	//��ӡ�����ۿɼ��ģ��õ���ԭ���ӡ
////���ƺ��ԭ��:  10000000000000000000000000000001   -1
//	printf("new3=%d\n",new3);
//	return 0;
//}



//λ������ &(��) |(��)  ^(���)  λ�������ǶԶ����Ƶ�ÿһλ������ �� ������  
//int main()
//{
//	int a,b,c,d,ret,ret1,ret2;
//
//
//	a=4;
//	b=3;
//	c=-1;
//	d=3;
//	// & ����  �������߱���������
//	ret= a & b;
//	ret1=a | b;
//	ret2= a ^ b;
//	//���������ͳһ�ò���
//	// a�Ķ�����:00000000000000000000000000000100   (����ԭ�� ���� ���붼һ��)  
//	// b�Ķ�����:00000000000000000000000000000011
//	//��λ&:     00000000000000000000000000000000
//	//��λ|:     00000000000000000000000000000111
//	//��λ^:     00000000000000000000000000000111   ��ͬΪ0  ��ͳΪ1
//	printf("ret=%d\nret1=%d\nret2=%d\n",ret,ret1,ret2); //0  7  7
//	printf("\n");
//	ret= c & d;
//	ret1=c | d;
//	ret2=c ^ d;
//	//c�Ķ�����:10000000000000000000000000000001 ԭ��
//	//          11111111111111111111111111111110 ����
//	//          11111111111111111111111111111111 ����
//
//	//d�Ķ�����:00000000000000000000000000000011 ԭ��
//
//	//��λ&:    00000000000000000000000000000011 ����-------00000000000000000000000000000011     3
//	//��λ|:    11111111111111111111111111111111 ����-------10000000000000000000000000000001    -1
//	//��λ^:    11111111111111111111111111111100 ����-------10000000000000000000000000000100    -4
//	printf("ret=%d\nret1=%d\nret2=%d\n",ret,ret1,ret2); 
//
//	return 0;
//}
//


//��ֵ������ : =  += -= *= /= %=   ....

//int main()
//{
//	int a;
//	//��ֵ����
//	a=5;
//	printf("a=%d\n",a);//5
//	a+=5; // a+=5  �ȼ��� a=a+5
//	printf("a=%d\n",a);//10
//	//������ֵ������ͬ��
//
//	return 0;
//}



//��Ŀ������:  !  - + &(ȡ��ַ) sizeof() ~  -- ++ *  (����) ת��

//
//int main()
//{
//	int a=5;
//	int b=0;
//	int* p;
//	int c=5;
//	char arr[]="as1asad";
//	// �߼�ȡ��   ��Ϊ��  �پ�Ϊ��
//	printf("%d %d\n",!a,!b); // 0  1
//
//	p=&a;//��a�ĵ�ַ����ָ�����p��
//	printf("%p\n",p);
//
//	//sizeof �㳤��  ��λΪ�ֽ�  sizeof�ǲ����� ���Ǻ���
//	printf("����Ϊ:%d\n",sizeof(a));
//	//ʡ������д��  ����Ǳ�������ʡ��  ���Ͳ���ʡ��
//	printf("����Ϊ:%d\n",sizeof a);
//	printf("����Ϊ:%d\n",sizeof arr);//8  ���ַ�����'\0'Ҳ���ȥ�ˡ�
//
//	// ~ �Զ�����λ����ȡ��   �����ǲ��Ƿ���λ��ÿһλ��Ҫ����ȡ������
//	//a�Ķ����ƣ�00000000000000000000000000000101               ����(����ԭ�� ���� ������ͬ) 5
//	//ȡ����     11111111111111111111111111111010               ����
//	//ȡ��ԭ��:  10000000000000000000000000000110               ԭ��   -6
//	printf("aȡ����%d\n",~a);
//
//	// ++ --��Ŀ������    
//	//��Ϊǰ��++�ͺ���++  ��Ϊǰ��--�ͺ���--
//	//ǰ��++ :��++��ʹ�ã�����++:��ʹ���ټ�    ����ͬ��
//	//a=5
//	b=++a;
//	printf("b=%d a=%d\n",b,a);//6  6
//	//c=5
//	b=c++;
//	printf("b=%d a=%d\n",b,c);// 5 6
//
//	// *��ӷ��ʲ����� ������ָ���������
//	printf("%d\n",*p); //6 p��ŵ���a�ĵ�ַ��a��ֵ�ı䣬*p��ֵҲ��ı�
//	// ����ת��
//
//	printf("%f\n",(float) a); //6.00000
//	return 0;

//}



//��ϵ������ > >= < <= != ==   �Ƚϼ�

//int main()
//{
//	int a=5;
//
//	if(a > 5)
//		printf("����5\n");
//	else
//		printf("С�ڵ���5\n");
//
//	return 0;
//}


//�߼������� && ||	 �����߼���Ͱ�λ��   �߼����밴λ��


//int main()
//{ 
//
//	//�ص㣺 &&�мټ�Ϊ�٣�������к����ļ���  ||���漴Ϊ�棬������к����ļ���
//	int a,b,c;
//	a=5;
//	b=3;
//	c=0;
//	if ((a && b )> 0)
//		printf("��\n");
//	else
//		printf("��\n");
//	if ((a && c )> 0)
//		printf("��\n");
//	else
//		printf("��\n");
//
//
//	return 0;
//}


//����������(��Ŀ������) exp1?exp2:exp3   exp1���� ʹ�ñ���ʽexp2,������ʹ�ñ���ʽexp3

//int main()
//{
//	int a,b,c;
//	a=5;
//	b=6;
//	c=a>b?1:2;
//	printf("%d\n",c); //2
//
//	return 0;
//}


//���ű���ʽexp1,exp2,exp3,
//int main()
//{
//	
//	int a,b,c,d,e;
//	a=1;
//	b=2;
//	c=3;
//	//���ű���ʽ�ص㣬���������μ��㣬����ֻȡ���һ������ʽ
//	d=(a=1,b=2,c=3);
//	printf("d=%d\n",d);  //3
//	//���ű���ʽ�ص㣬���������μ��㣬����ֻȡ���һ������ʽ   a=1,b=2,c=3
//	e=(a++,b++,c++);
//	printf("a=%d b=%d c=%d e=%d\n",a,b,c,e); //2 3 4 3
//	return 0;
//}


////�±����á��������á��ṹ���Ա���ʲ�����   [] () .
//void test()
//{
//	int a;
//	a=5;
//	printf("a=%d\n",a);
//
//}
//struct Book
//{
//	char name[20];
//	int price;
//};
//int main()
//{ 
//	//��ʼ���ṹ��
//	struct Book b1={"C����",55};
//	//����ṹ������ָ��
//	struct Book* pb;
//
//	int num[6]={0,1,2,3,4,5};
//	int i,sz;
//	sz=sizeof(num)/sizeof(num[0]);
//	pb=&b1;
//	printf("%d\n",sz);
//	// []������ʷ�
//	for(i=0;i<sz;i++)
//	{
//		printf("num[i]=%d\n",num[i]);
//	
//	}
//	//()��������
//	test();
//
//	//. �ṹ���Ա����
//	printf("name��%s\n",b1.name);
//	printf("price:%d\n",b1.price);
//	printf("\n");
//	// *  ->ָ����ʳ�Ա   
//	printf("name��%s\n",(*pb).name);
//	printf("price:%d\n",(*pb).price);
//	printf("\n");
//	printf("name��%s\n",pb->name);
//	printf("price:%d\n",pb->price);
//	return 0;
//}


//����ʽ��ֵ

//����ʽ��ֵ��˳��һ�������ɲ����������ȼ��ͽ���Ծ�����
//ͬ������Щ����ʽ�Ĳ���������ֵ�Ĺ����п�����Ҫת��Ϊ��������


// �������ͣ� ��ʽ����ת��
//C������������������������ȱ�������͵ľ��������е�
//Ϊ�˻��������ȣ�����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ�ᱻת����ͨ���ͣ����ֳ�Ϊ��������

//����С��Int���ͳ��ȵĶ�Ҫ��ת��int����  �磺char  short

//�������������ձ������������͵ķ���λ��������

//int main()
//{
//	 char c1=-1;
//	 char c2=1;
//	 char c3;
//	 char c4=3;
//	 char c5=127;
//	 char c6;
//	 //�������������ձ������������͵ķ���λ��������
//
//	 //��������������
//	 //char ֻ��8��bit,������Ϊ:11111111 ����
//	//��������������Ϊ4��byte��11111111111111111111111111111111 ����
//	 
//
//
//	 //��������������
//	 //char ֻ��8��bit,������Ϊ:00000001  ���� 
//	 //��������������Ϊ4��byte:00000000000000000000000000000001
//
//	 //�޷����������������λ��0 
//
//	 //c1��������:11111111111111111111111111111111
//	 //c2��������:00000000000000000000000000000001
//	 // ���     :1(���,����)00000000000000000000000000000000         
//	 //���ս��  :00000000000000000000000000000000  ����
//	 c3=c1+c2;
//	 printf("c3=%d\n",c3); // 0
//
//	 //c4 3:  00000011  �ض�
//	 //c5 127:01111110  �ض�
//	 //c4��������:00000000000000000000000000000011  ����
//	 //c5��������:00000000000000000000000001111111  ����
//	 // ���      00000000000000000000000010000010  ����
//	 // �ض�(8bit):10000010   ����
//	 //            10000001   ����
//	 //            11111110   ԭ��   -126
//	 c6=c4+c5;
//	 printf("c6=%d\n",c6);
//	 return 0;
//}


//����ת��
//���ĳ���������ĸ������������ڲ�ͬ�����ͣ���ô��������һ����������ת��Ϊ��һ�������������ͣ�
//����������޷����У�����Ĳ����ϵ��ΪѰ������ת��
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int 
//���ĳ������������������������б��������ϵͣ���ô����Ҫת��Ϊ����һ�������������ͺ�ִ������

//int main()
//{
//	float f=3.14;
//	int num=f;
//	
//
//	printf("%d\n",num);
//
//	return 0;
//}

//��������˳�� ���� ʡ��

