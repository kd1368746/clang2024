#include<stdio.h>
#include<sydlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10];
	printf("探査値を入力：");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("入力データ%dは見つかりませんでした\n", s);
	}
	else {
		printf("%d番目に見つかった\n", i);
	}
}