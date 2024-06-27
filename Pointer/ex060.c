#include<stdio.h>
main()
{
	char data[15] = "Language";
	int i;
	char s;
	char* p_data;
	p_data = data;
	printf("data[]=%s\n", p_data);
	printf("ŠG•¶š‚Í");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data=data,i = 0; *(p_data + i) != '\0'; i++) {
		if (s == *(p_data + i)) {
			printf("%d,", i + 1);
		}
	}
	printf("‚Å‚·\n");
}