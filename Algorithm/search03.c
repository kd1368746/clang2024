#include<stdio.h>
main()
{
	int low, high, mid, s;
	int data[17]= {5,7,12,20,28,30,32,35,37,40,48,55,62,77,80,95,101};
	printf("�T���l�����");
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
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d���A��[%d]�Ŕ����I\n", s, mid);
	}
}