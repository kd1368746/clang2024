#include<stdio.h>
main()
{
	int num;
	printf("®”‚ð“ü—Í");
	scanf("%d", &num);
	if (num >= 10 && num <= 49) {
		switch(num/10){
		case(1):
			printf("‚P‚O“_‘ä‚Å‚·\n");
			break;
		case(2):
			printf("‚Q‚O“_‘ä‚Å‚·\n");
			break;
		case(3):
			printf("‚R‚O“_‘ä‚Å‚·\n");
			break;
		case(4):
			printf("‚S‚O“_‘ä‚Å‚·\n");
			break;
		}
	}
	else {
		printf("ƒGƒ‰[II");
	}
}