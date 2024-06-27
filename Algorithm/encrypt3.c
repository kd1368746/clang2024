#include<stdio.h>
main()
{
	int i, k[20];
	char s[21];
	printf("文字列を入力：");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の複合化キー：", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("複合化済み文字列は、%s\n", &s[0]);
}