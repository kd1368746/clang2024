#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	srand(time(0));
	rand();
	c = rand() % 3;
	printf("何を出しますか\n");
	printf("(1:パー2:チョキ3:グー)＞");
	scanf("%d\n", &p);
	switch (p) {
	case 1:
		printf("\nプレイヤーはパーです\n");
			break;
	case 2:
		printf("\nプレイヤーはチョキです\n");
		break;
	case 3:
		printf("\nプレイヤーはグーです\n");
			break;
	}
	switch (c) {
	case 0:
			printf("コンピューターは、パーです\n");
			break;
	case 1:
		printf("コンピューターは、チョキです\n");
		break;
	case 2:
		printf("コンピューターは、グーです\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3) {
	case 0:
		printf("\nあいこです\n");
		break;
	case 1:
		printf("\nコンピューターの勝ちです\n"); 
		break;
	case 2:
		printf("\nコンピューターの勝ちです\n");
	}
}