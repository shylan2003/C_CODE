#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//随机数函数rand.srand.system引用的头文件
#include <string.h>//函数strcpy引用的头文件













int main()
{
	char input[20] = { 0 };
	system("shutdown _s _t");
again:
	printf("请输入我是猪，否则电脑将在一分钟后关闭\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown _a");
	}
	else
	{
		goto again;
	}
	return 0;
}






//猜数字游戏
//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play   2.out    ***\n");
//	printf("***************************\n");
//}
//void game()
//{
//	//生成随机数
//	//猜数字
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");//选择play或out
//		scanf("%d", &input);//选择输入一个数
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
