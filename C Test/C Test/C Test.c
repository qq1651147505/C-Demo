#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
//����n�Ľײ�

//
//int main()
//{
//	//n!  1*2*3*4*5*6*7*8*9*...
//	int n;
//	int i;
//	int  Calculate=1;
//	
//	
//	
//	printf("�����������Ҫ���Ǹ����Ľײ�:>");
//	scanf("%d",&n);
//	
//	getchar();
//	
//	finish=clock()-start;
//	for(i=1;i<n+1;i++)
//	{
//		Calculate=Calculate*i;//1 2 6 
//	
//	}
//	
//	
//	printf("n�Ľײ�Ϊ��%d\n",Calculate);
//	return 0;
//
//}

//int frequency_of_primes (int n) {
//  int i,j;
//  int freq=n-1;
//  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
//  return freq;
//}
//
//int main ()
//{
//  clock_t t;
//  int f;
//  
//  t = clock();
//  printf("%d\n",t);
//  printf ("Calculating...\n");
//
//  f = frequency_of_primes (99999);
//  printf ("The number of primes lower than 100,000 is: %d\n",f);
//  t = clock() - t;
//  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
//  return 0;
//}

//�ú�����װ
//
//int Step(int x)//������Ҫ���Ǹ����Ľײ�
//{
//	int i;
//	int Calculate=1;
//	for(i=1;i<x+1;i++)
//	{
//		Calculate=Calculate*i;
//	
//	}
//
//	
//	return Calculate;
//
//}
//
//int main()
//{
//	int n;
//	int Rec;//���պ����ķ���ֵ
//	printf("�����������Ҫ���Ǹ����Ľײ�:>");
//	scanf("%d",&n);
//	getchar();
//
//	Rec=Step(n);
//	printf("n�Ľײ�Ϊ:%d\n",Rec);
//
//	return 0;
//}


//����ײ���ۼӺ�


//int main()
//{
//	//1!+2!+3!+...+n!
//	int n;
//	int i;
//	int Calculate=1;
//	int sum=0;
//	printf("�����������Ҫ���Ǹ����Ľײ�:>");
//	scanf("%d",&n);
//	getchar();
//	for(i=1;i<n+1;i++)
//	{
//		Calculate=Calculate*i;
//		sum=sum+Calculate;
//	}
//
//	printf("n�Ľײ�Ϊ��%d\n",Calculate);
//	printf("n�Ľײ��ۼӺ�Ϊ��%d\n",sum);
//	return 0;
//
//
//}

//��һ������������в��Ҿ����ĳ������n
//int test(int* arr1,int i,int k)
//{
//	for(i=0;i<sizeof(arr1)/sizeof(arr1[0])-2;i++)
//	{
//		if (arr1[i]== k )
//			return i;
//	
//	}
//	
//}
//int main()
//{
//	int  arr1[]={1,2,3,4,5,6,7,9,10};//����һ���ض�������
//	int k=5;//����Ҫ���ҵ�������5
//	int i=0;
//	int n;
//	clock_t start,finish;
//	start=clock();
//	n=test(arr1,i,k);
//	printf("%d\n",n);
//	//strlen ֻ�ܼ����ַ����ĳ���
//	//����������������ĳ������   ��Ŀ��ʶ������   �������ǿ��Բ����۰���ҷ�����  Ч�ʸ���
//	
//	finish=clock()-start;
//	printf("t=%d  second=%f\n",start,((float)finish / CLOCKS_PER_SEC));
//	return 0;
//}

//�۰���ҷ� ��ѯһ�����������е���������
//int main()
//{
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int left;//���±�
//	int right;//������󳤶����±�
//	int mid;//�����м�Ԫ������
//	left = 0;
//	/*scanf("%d",&k);
//	getchar();*/
//	right=(sizeof(arr1)/sizeof(arr1[0]))-1;//��ȡ������󳤶ȵ��±�
//	printf("%d\n",right);
//	/*mid = (left+right)/2;*///��ȡ�м�Ԫ�ص��±�
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if (arr1[mid] > k)
//		{
//			right=mid-1;
//	
//		}
//		else if (arr1[mid] < k)
//		{
//		 
//			left=mid+1;
//			
//		}
//		else
//			{
//				printf("�ҵ����±��ǣ�%d\n",mid);
//				break;
//			}
//		
//
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//
//	return 0;
//}


//��д����ʵ�ֶ���ַ��������ƶ������м���
//int main()
//{
//	char arr1[]="abcde";
//	char arr2[]="#####";
//	int left =0;
//	int right=0;//��ȡԪ�������һ�������±�
//	//printf("strlength=%d\n",strlen(arr1));//5  strlen���ַ������ȵ�ʱ���㵽'\0'֮ǰ��
//	//printf("sizeof=%d\n",sizeof(arr1)/sizeof(arr1[0]));//6   sizeof���ַ����ĳ��ȵ�ʱ�򣬰�'\0'Ҳ���ȥ��
//	right=strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(100);//ͷ�ļ���windows.h Sleep(ʱ�� ��λ����)
//	
//	}
//
//	// a####e  ab#de abcde 
//	
//
//
//
//	return 0;
//
//}


//��д����ʵ���û���¼
//
//int main()
//{
//	char account[16]={0};
//	char password[16]={0};
//	int count;
//	printf("������Ҫ��½���˺ź����룺>");
//	
//	for(count=1;count<4;count++)
//	{   scanf("%s%s",account,password);
//		getchar();
//		/*printf("%s %s\n",account,password);*/
//		//==���������Ƚ������ַ����Ƿ����  Ӧ��ʹ��һ���⺯�� strcmp   �Ա�һ������0
//		if ((strcmp(account,"admin123") ==0 )&&( strcmp(password,"123456") == 0) )
//		{
//			printf("��¼�ɹ���\n");
//			break;
//	
//		}
//		else
//		{
//		  if (count==3)
//			  break;
//		printf("�����������˺ź�����:>");
//		  
//		  continue;
//		}
//	
//	}
//	
//	return 0;
//
//}

//#include<stdio.h>
//#include<time.h>
//clock_t start, stop; //clock_tΪclock()�������صı�������
//double duration;
//int main()
//{
//	int i;
//    start=clock();
//    //******************************
//    //*����д����Ҫ��������ʱ��ĳ��� * 
//    //******************************
//	//ʱ��̫�̵Ļ� ����ֵ��0 clock
//	for (i=0;i<1000000000;i++)
//	{
//			;
//	}
//    stop=clock();
//    duration=(double)(stop-start)/CLK_TCK; //CLK_TCKΪclock()������ʱ�䵥λ����ʱ�Ӵ��
//    printf("%f\n",duration);
//    return 0;
//
//}