#include<stdio.h>
int gokei(int, int, int);
float heikin(int, int, int);
main()
{
	int d1, d2, d3;

	printf("�������R����");
	scanf("%d%d%d", &d1, &d2, &d3);

	printf("���v��%d,���ς�%.2f", gokei(d1, d2, d3),heikin(d1,d2,d3));
}
int gokei(int d1, int d2, int d3)
{
	return d1 + d2 + d3;
}
float heikin(int d1, int d2, int d3)
{
	return(float)gokei(d1, d2, d3) / 3;
}
