#include<stdio.h>
void display1(int n); //desplay�̃v���g�^�C�v�錾
void display2(int* n);//�ϐ����͂Ȃ��Ă����� 
main()
{
	int a, b;
	printf("���l�H:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);

	printf("���l���H�F");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}
void display1(int n)
{
	printf("���l���́A%d�ł�\n", n);
	return;
}
void display2(int* n)
{
	printf("���lb�́A%d�ł�\n", *n);
	*n += 10;
	return;
}