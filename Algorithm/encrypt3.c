#include<stdio.h>
main()
{
	int i, k[20];
	char s[21];
	printf("���������́F");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[�F", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("�������ςݕ�����́A%s\n", &s[0]);
}