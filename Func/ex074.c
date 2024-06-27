#include<stdio.h>
void display1(int n); //desplayのプロトタイプ宣言
void display2(int* n);//変数名はなくてもいい 
main()
{
	int a, b;
	printf("数値？:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);

	printf("数値ｂ？：");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}
void display1(int n)
{
	printf("数値ａは、%dです\n", n);
	return;
}
void display2(int* n)
{
	printf("数値bは、%dです\n", *n);
	*n += 10;
	return;
}