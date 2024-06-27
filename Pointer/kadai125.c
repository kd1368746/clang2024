#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,-999 };
	int* p_data;
	int i;
	p_data = data;
	printf("ポイントを固定で表示");
	for (data = 0; data != -999; data++) {
		printf("配列＝%d\n", data);
	}
	printf("ポインタを変化させて表示");
	for (data = 0; data != -999; data++) {
		printf("配列＝%d\n", data);
	}
}