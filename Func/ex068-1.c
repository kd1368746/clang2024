#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("�O�̐������󔒂ŋ�؂��ē���");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);

	printf("��������́iCtr�{Z�ŏI���ja");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("��������́iCtrl�{Z�ja");
	}
}