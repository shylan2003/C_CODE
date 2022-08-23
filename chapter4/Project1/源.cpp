#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int i = 1;
	printf("%d", i);
	i += 2;
	for (i; i <= n; i += 2)
	{
		printf("%d", i);

	}
	return 0;
}