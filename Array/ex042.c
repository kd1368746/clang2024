#include<stdio.h>
main()
{
	 char data[] = "Apple";
	 int i;
	printf("�P�������\��\n");
	i = 0;
	while(data[i]!='\0') {
		printf("%c",data[i]);
		i++;
	}
	printf("\n������̕\��\n");
	printf("%s\n", &data[0]);
}
//%5�ŏ����Ǝw�肵�������̂Ƃ��납�當�����\��