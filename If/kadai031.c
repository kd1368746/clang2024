#include<stdio.h>
main()
{
	float i, a;
	printf("�Q�̎����l�H�F");
	scanf("%f%f", &i, &a);
	if (i < a) {
		printf("�傫���ق��́�%f", a);
	}
	else {
		printf("�傫���ق��́�%f", i);
	}
}