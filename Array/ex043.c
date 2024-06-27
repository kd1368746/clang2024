#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;
	cnt = 0;
	while(str[cnt]!='\0') {
		cnt++;
	}
	printf("•¶š—ñF%s\n" ,&str[0]);
	printf("•¶š—ñ‚Í%d•¶š\n", cnt);
}