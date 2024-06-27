#include<stdio.h>
main()
{
	int low, high, mid, s;
	int data[17]= {5,7,12,20,28,30,32,35,37,40,48,55,62,77,80,95,101};
	printf("探索値を入力");
	scanf("%d", &s);
	low = 0;
	high = 16;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == data[mid]) {
			break;
		} 
		if (s > data[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low>high) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dを、ｄ[%d]で発見！\n", s, mid);
	}
}