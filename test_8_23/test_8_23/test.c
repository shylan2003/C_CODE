#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//���������rand.srand.system���õ�ͷ�ļ�
#include <string.h>//����strcpy���õ�ͷ�ļ�













int main()
{
	char input[20] = { 0 };
	system("shutdown _s _t");
again:
	printf("������������������Խ���һ���Ӻ�ر�\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown _a");
	}
	else
	{
		goto again;
	}
	return 0;
}






//��������Ϸ
//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play   2.out    ***\n");
//	printf("***************************\n");
//}
//void game()
//{
//	//���������
//	//������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("��ϲ��¶���\n");
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
//		printf("��ѡ��:");//ѡ��play��out
//		scanf("%d", &input);//ѡ������һ����
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
