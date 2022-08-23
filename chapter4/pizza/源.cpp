#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define PI 3.14159

int main()
{
	float area, circum, radius;
	printf("what is the radius of your pzza?\n");
	scanf("%f",&radius);//使用scanf函数时引用变量需要加上&
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("circumference = %.2f,area = %.2f\n", circum, area);
	return 0;

}