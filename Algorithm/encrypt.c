#include<stdio.h>
main()
{
	int i;
	char s[6];
	printf("文字列を入力：");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("暗号化文字列は%s\n",&s[0]);
}