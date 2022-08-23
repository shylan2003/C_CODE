#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>//sleep函数的头文件
#include <stdint.h>//system函数的头文件
//编写代码实现模拟用户登录场景，并且只能登录三次
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，而应该使用strcmp函数
		{
			printf("登录成功！\n");
			break;
		}
		else
			printf("密码错误！\n");
	}
	if (i == 3)
		printf("输入密码均错误，请重新登录！");

	return 0;
}
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//for (i = 1; i <= n; i++)//假如i=0，后面判断为i<n,此时循环为n次；i=1时，后面判断为i<=n，此时也循环n次
//	ret = ret * i;
//printf("ret=%d ", ret);
//return 0;
//}

//计算n的阶乘之和
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = ret + sum;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//在一个有序数组中查找某个具体数字n，编写int binsearch（int x，int v[],int n);功能：在v[0]<=v[1]<=v[2]<=
//...<=v[n-1]中查找x
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}		
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0; 
//}
//
////编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒，1秒=1000毫秒
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}