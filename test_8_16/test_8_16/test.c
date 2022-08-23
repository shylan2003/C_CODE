#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int day = 0;
	scanf("%d", &day);
	if (day % 2 == 1)
		printf("%d是奇数\n", day);
	else
		printf("%d是偶数\n", day);
	return 0;
}