#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>//sleep������ͷ�ļ�
#include <stdint.h>//system������ͷ�ļ�
//��д����ʵ��ģ���û���¼����������ֻ�ܵ�¼����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ���Ӧ��ʹ��strcmp����
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 3)
		printf("������������������µ�¼��");

	return 0;
}
//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//for (i = 1; i <= n; i++)//����i=0�������ж�Ϊi<n,��ʱѭ��Ϊn�Σ�i=1ʱ�������ж�Ϊi<=n����ʱҲѭ��n��
//	ret = ret * i;
//printf("ret=%d ", ret);
//return 0;
//}

//����n�Ľ׳�֮��
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

//��һ�����������в���ĳ����������n����дint binsearch��int x��int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=
//...<=v[n-1]�в���x
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0; 
//}
//
////��д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(1000);//��λ�Ǻ��룬1��=1000����
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}