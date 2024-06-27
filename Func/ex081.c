#include<stdio.h>
int saidai(int* p, int numder);
int saisyou(int* p, int numder);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l%d\n", saidai(data, 8));
	printf("Å¬’l%d\n", saisyou(data, 8));
}
int saidai(int* p, int numder)
{
	int dai,i=0;
	dai = *p;
	p++;
	while (i < numder-1) 
	{
		if (dai < *p) 
		{
			dai = *p;
		}
		p++;
		i++;
	}
	return(dai);
}
int saisyou(int* p, int numder)
{
	int dai, i = 0;
	dai = *p;
	p++;
	while (i < numder - 1)
	{
		if (dai >*p)
		{
			dai = *p;
		}
		p++;
		i++;
	}
	return(dai);
}