#include<stdio.h>
main()
{
	int i;
	float j;
	printf("����(-999�ŏI��)�F");
	scanf("%d", &i);
	j = 0;
	while (i != -999) {
		j += i;
		printf("����(-999�ŏI��):");
		scanf("%d", &i);
	}
	printf("���v��%d\n���ρ�%.2f\n", j, j / 4);
}