#include<stdio.h>
int reverse(char* s1, char* s2);
main()
{
	char str1[256], str2[256];
	printf("•¶š—ñHF");
	gets(str1);
	reverse(str1, str2);
	printf("str1: %s\nstr2:%s\n", str1, str2);
}
int reverse(char* s1, char* s2)
{
	int cnt;
	for (cnt = 0; *s1 != "\0"; cnt++, s1++);
	s1--;
	cnt--;

	while (cnt > 0) {
		*s2 = *s1;
		s1--;
		s2++;
		cnt--;
	}
	*s2 = '\0';
	return;
}

		