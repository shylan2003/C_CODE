#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdint.h>


//������ͣ���1-1/2+1/3-1/4+1/5-...+1/99-1/100��ֵ

//int main()
//{
//	double  sum = 0.0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 += -1.0/i;
//		}
//		else
//		{
//			sum2 += 1.0/i;
//		}
//		sum = sum1 + sum2;
//
//	}
//	printf("%lf",sum);
//	return 0;
//}



//teacher�Ĵ���:
//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}



//��10�������е����ֵ
//int main()
//{
//	int i = 1;
//	int max = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("max = %d", max);
//	return 0;
//}

//9*9�˷��ھ���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int cj = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j =1; j <= i;j++)
//		{
//			cj = i * j;
//			if (i == j)
//			{
//				printf("%d*%d=%d\n", i, j, cj);
//			}
//			else
//			{
//				printf("%d*%d=%d ", i, j, cj);
//			}
//		}
//	}
//	getchar();
//	return 0;
//}







//��д����1-100 �г��ֶ��ٸ�����9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//
//	}
//	printf("count = %d\n", count);
//	return 0;
//}






//��ӡ������дһ�����룬��ӡ100-200֮�������
//�ж�������ֻ�ܱ�һ���䱾����������
//1.�Գ���     ����������n�־��硷
//int main()
//{
//	int i = 100;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j=2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}	
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d", count);
//	return 0;
//}









//��ӡ���꣬��ӡ1000-2000��֮�������
//�ж����꣺
//1.�ܱ�4�����Ҳ��ܱ�100����������
//2.�ܱ�400����������
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}	
//	printf("\ncount = %d\n ", count);
//	return 0;
//}









//���Լ��
//int main()
//{
//	int i = 1;
//	int m, n = 0;
//	scanf("%d %d",&m, &n);
//	for (i = 1;; i++)
//	{
//		if (m % i == 0 && n % i == 0)
//			printf("%d ", i);	//����˹�Լ������û�н����������
//	}
//	return 0;
//}
//teacher�Ĵ���:
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d %d",& m,& n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("���Լ���ǣ�%d", n);
//	return 0;
//}






//��n�ķ�Χ�ڴ�ӡ3�ı�������
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int a = n / 3;
//	for (i = 1;i <= a; i++)
//	{
//		m = 3 * i;
//		printf("%d ", m);
//	}
//	
//	return 0;
//}

//teacher�Ĵ���:дһ�������ӡ1-100֮��3�ı�������
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//�����Һ����븴����




//���������Ӵ�С���
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b>= c)
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", a, b, c);
//	else if (a >= c >= b)
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", a, c, b);
//	else if (b >= a >= c)
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", b, a, c);
//	else if (b >= c >= a)
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", b, c, a);
//	else if (c >= b >= a)
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", c, b, a);
//	else
//		printf("�������Ӵ�С�����ǣ�%d,%d,%d\n", c, a, b);
//	return 0;
//}
//������ûɶë�������ǽ������


//teacher�Ĵ���
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tep = a;
//		a = b;
//		b = tep;
//
//	}
//	if (a < c)
//	{
//		int tep = a;
//		a = c;
//		c = tep;
//
//	}
//	if (b < c)
//	{
//		int tep = b;
//		b = c;
//		c = tep;
//	}
//	printf("��������С���������ǣ�%d,%d,%d", a, b, c);
//	return 0;
//}