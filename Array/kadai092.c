#include<stdio.h>
main()
{
	int a [10], c[10], i;
	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
		printf("a=%d\n", a[i]);
	}
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	printf("�z��a����z��c�ɃR�s�[\n�z��a��");
	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
	printf("\n�z��c��");
	for (i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}
}