#include<stdio.h>
#include<string.h>
#include<math.h>
//int sum(int a)
//{
//	int c=0;
//	static int b=3;
//	c+=1;
//	b+=2;
//	return (a+b+c);
//		
//
//}
//
//int main()
//{
//	int i;
//	int a=2;
//	for(i=0;i<5;i++)
//		printf("%d\n",sum(a));
//
//	return 0;
//
//}


//д���뽫���������Ӵ�С���
//int main()
//
//{
//	int a,b,c;
//	int temp;
//	printf("�������������ֲ��ÿո������>");
//	scanf("%d%d%d",&a,&b,&c);
//	getchar();     //a b c
//	//����a������  4 3 5
//	
//			if (a < b)
//			{
//				temp=a; 
//				a=b;
//				b=temp;
//			}
//			if (a < c )
//			{
//			  temp=a;//4
//			  a=c;//5
//			  c=temp;//4
//			
//			}
//			if ( b <c )
//			{
//				temp=b;
//				b=c;
//				c=temp;
//			}
//			
//			printf("%d %d %d",a,b,c);
//
//	return 0;
//}

//��ӡ1-100֮�����ı���

//int main()
//{
//	int i,count,n;
//	count =0;
//	printf("������Ҫ��ѯ1���Ǹ���Χ�ڵ����ı�����>");
//	scanf("%d",&n);
//	getchar();
//	for(i=1;i<n;i+=2)//ż���϶��������ı��� ���Կ�������ż��
//	{
//	 if (i % 3 == 0)
//	 { 
//		 count++;
//		 printf("i=%d ",i);
//		 if(11==count)
//			 printf("\n");
//		 
//	 }
//		
//	}
//
//	printf("\n1-%d֮��һ����%d�����ı���\n",n,count);
//	return 0;
//
//}


//����������  �������������������
//int main()
//{
//	int Num1,Num2,Surplus;
//	printf("����������Ҫ�����������������������ÿո������������>");
//	scanf("%d%d",&Num1,&Num2);
//	getchar();
//	while(1)   //շת��������������
//	{
//		Surplus=Num1 % Num2 ;//���� 
//			if(0 == Surplus)
//			{
//				printf("�������Ϊ��%d\n",Num2);
//				break;
//			}
//
//		Num1=Num2;
//		Num2=Surplus;
//		
//
//	
//	}
//	
//
//	return 0;
//
//}

//��ӡ1000~2000��֮�������

//int main()
//{
//	int i;
//	int j;
//	int count=0;
//	int k;
//	printf("������Ҫ��ѯ�Ǹ���ݵ��Ǹ����֮������꣬���ÿո������>");
//	scanf("%d%d",&i,&j);
//	
//	getchar();
//	k=i;
//	//�����������������������4 ���Ҳ�������100
//	//                  ������400
//	for(i;i<j;i++)
//		if((i % 4 ==0 && i %100 !=0) || (i % 400==0))
//			{
//				
//				
//				printf("����:%d ",i);
//				count++;
//			}
//			
//
//		printf("\n%d~%d��֮��һ����%d������\n",k,j,count);
//	return 0;
//}

//��ӡ������Χ�ڵ�����
//
//int main()
//{
//	int i=0;
//	int j=0;
//	int k;
//	printf("�����������Χ�����ÿո����:>");
//	scanf("%d%d",&i,&j);
//	getchar();
//	if ( i % 2 !=0)
//		{
//		for(i;i<j;i+=2)
//		{
//		   for(k=2;k<=sqrt(i);k++)
//		   {
//					if(i%k== 0)
//					{
//						break;
//				
//					}
//		   }
//		
//
//		   if(k > sqrt(i))
//			   printf("%d ",i);
//		
//		}
//	}
//	else
//		for(i;i<j;i+=1)
//	{
//	   for(k=2;k<=sqrt(i);k++)
//	   {
//				if(i%k== 0)
//				{
//					break;
//				
//				}
//	   }
//		
//
//	   if(k > sqrt(i))
//		   printf("%d ",i);
//		
//	}
//
//		
//
//
//	return 0;
//}

//�����һ�� 1~100�г���9�ĸ���


//int main()
//{
//	// �������� ��λ����9 ���� ʮλ����9 ����1~100��9���ֵĸ���
//
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//	   if((9==i%10)|| (9==i/10))
//	   {
//			count++;
//			printf("%d ",i);
//	   }
//
//	}
//	printf("\nһ������9�Ĵ���Ϊ��%d\n",count);
//
//	return 0;
//}


//�������  ��д������з������(1/1- 1/2+ 1/3- 1/4+....- 1/100)

//int main()
//{
//	//��������  ������Ҫ�Ȳ���1~100�����֣��۲췢��  ��ĸΪż��ʱ������ǰ��Ϊ����
//	int i=0;
//	int flag=1;//��������ķ���λ
//	float sum=0;
//	int n=0;
//	printf("��������1~n�������ĺͣ�>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		//����Ҫע�� ����Ҫ�����С��  ��������ͱ�����֮�У���һ����float���͵�������Ȼ�������������ȡ��
//		sum=sum+flag*(1.0/i);
//		flag=-flag;
//		
//	}
//	printf("sum=%f\n",sum);
//	return 0;
//
//
//
//}



//����n��������n�����е����ֵ

//int main()
//{
//	int i;
//	int arr1[]={-3,-4,-5,-9,-6,-4,-5,-3,-6,-7};
//	int size;//�����鳤��  
//	int max;//����max��������
//	size=sizeof(arr1)/sizeof(arr1[0]);
//	//����arr1[0]Ԫ�������������������
//	max=arr1[0];
//	for(i=0;i<size;i++)
//	{
//	  if(arr1[i] > max)
//	  {
//		  max=arr1[i];
//	  }
//	
//	}
//	printf("max=%d\n",max);
//	return 0;
//}


//����Ļ�����һ��9*9�˷��ھ���

//int main()
//{
//	int i=0;
//	int j=0;
//	//��Ҫ���һ���˷��ھ�����Ҫ�������ѭ�������У��ڲ�ѭ�������У�����һ�δ�����ѭ���꣬��һ����
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//��дһ��������һ���������������в��Ҿ����ĳ����    �ö��ַ�����(����) Ч�ʸ�  
//�ҵ��ʹ�ӡ�±꣬�Ҳ�����������Ҳ���
//int main()
//{
//	int arr1[]={3,5,7,9,10,11,15,16,18,19,21,22,35};
//	int left=0; //������
//	int right=0;//������
//	int mid=0; //�м�����
//	int k=0;;//��Ҫ���ҵ���
//	printf("������Ҫ���ҵ���:>");
//	scanf("%d",&k);
//	getchar();
//	right=sizeof(arr1)/sizeof(arr1[0])-1;//sizeof�����������'\0'������ȥ
//	while(left <= right)
//	{
//		mid=(left+right)/2;
//		if(arr1[mid] < k)
//		{
//		   left=mid;
//		   mid++;
//			
//		}
//		if(arr1[mid] > k)
//		{
//			right=mid;
//			right--;
//		}
//		if(arr1[mid]==k)
//		{
//			printf("�±�Ϊ:%d\n",mid);
//			break;
//		}
//		
//	}
//	if(left > right)
//		printf("û�ҵ���\n");
//
//
//	return 0;
//}