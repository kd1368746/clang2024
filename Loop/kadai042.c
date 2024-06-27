#include<stdio.h>
main()
{
	int i, j;
	i = 0;
	j = 0;
	while (j<300+1 ) {
		j += i;
		printf("%d+",i);
		i++;
	}
	printf("=%d",j);
}