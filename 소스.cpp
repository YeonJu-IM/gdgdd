#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double change(int a);

int main()
{
	double inch;
	printf("인치를 입력하시오: ");
	scanf("%lf", &inch);
	printf("%f인치는 %.2f센티미터입니다.\n", inch, change(inch));

	return 0;


}
double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}