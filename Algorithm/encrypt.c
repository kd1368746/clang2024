#include<stdio.h>
main()
{
	int i;
	char s[6];
	printf("•¶š—ñ‚ğ“ü—ÍF");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s\n",&s[0]);
}