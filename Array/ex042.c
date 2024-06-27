#include<stdio.h>
main()
{
	 char data[] = "Apple";
	 int i;
	printf("１文字ずつ表示\n");
	i = 0;
	while(data[i]!='\0') {
		printf("%c",data[i]);
		i++;
	}
	printf("\n文字列の表示\n");
	printf("%s\n", &data[0]);
}
//%5で書くと指定した数字のところから文字列を表示