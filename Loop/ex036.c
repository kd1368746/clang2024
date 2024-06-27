#include<stdio.h>
main()
{
	int i;
	printf("dreak test progrem\n");
	for (i = 1; i < 10; i++) {
		if (i == 7) {
			break;                      //ループを脱出
		}
		printf("%3d", i);
	}
	printf("\n\ncotinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			continue;　　　　　　　　　　//残りの処理をスキップ
		}
		printf("%3d", i);
	}
}
	