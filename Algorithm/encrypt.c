#include<stdio.h>
main()
{
	int i;
	char s[6];
	printf("���������́F");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("�Í����������%s\n",&s[0]);
}