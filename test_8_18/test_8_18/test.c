#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdint.h>


//分数求和，求1-1/2+1/3-1/4+1/5-...+1/99-1/100的值

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



//teacher的代码:
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



//求10个整数中的最大值
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

//9*9乘法口诀表
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







//编写程序1-100 中出现多少个数字9
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






//打印素数，写一个代码，打印100-200之间的素数
//判断素数：只能被一及其本身整除的数
//1.试除法     《素数求解的n种境界》
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









//打印闰年，打印1000-2000年之间的闰年
//判断闰年：
//1.能被4整除且不能被100整除是闰年
//2.能被400整除是闰年
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









//最大公约数
//int main()
//{
//	int i = 1;
//	int m, n = 0;
//	scanf("%d %d",&m, &n);
//	for (i = 1;; i++)
//	{
//		if (m % i == 0 && n % i == 0)
//			printf("%d ", i);	//求出了公约数，但没有解决最大的问题
//	}
//	return 0;
//}
//teacher的代码:
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
//	printf("最大公约数是：%d", n);
//	return 0;
//}






//在n的范围内打印3的倍数的数
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

//teacher的代码:写一个代码打印1-100之间3的倍数的数
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
//靠，我好像想复杂了




//将三个数从大到小输出
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b>= c)
//		printf("三个数从大到小依次是：%d,%d,%d\n", a, b, c);
//	else if (a >= c >= b)
//		printf("三个数从大到小依次是：%d,%d,%d\n", a, c, b);
//	else if (b >= a >= c)
//		printf("三个数从大到小依次是：%d,%d,%d\n", b, a, c);
//	else if (b >= c >= a)
//		printf("三个数从大到小依次是：%d,%d,%d\n", b, c, a);
//	else if (c >= b >= a)
//		printf("三个数从大到小依次是：%d,%d,%d\n", c, b, a);
//	else
//		printf("三个数从大到小依次是：%d,%d,%d\n", c, a, b);
//	return 0;
//}
//看起来没啥毛病，但是结果不对


//teacher的代码
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
//	printf("三个数从小到大依次是：%d,%d,%d", a, b, c);
//	return 0;
//}