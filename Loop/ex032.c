#include<stdio.h>
main()
{
	int a, b;
	printf("数を入れて");
	scanf("%d",&b );
	for (a = 1; a <= 9; a++){
		printf("%d ",b*a);
	}
}