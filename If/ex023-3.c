#include<stdio.h>
main()
{
	int a1, a2, a;
	printf("‰‰Zq‚ğ“ü—Í");
	scanf("%d", &a);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d%d", &a1, &a2);
	if (a == 1) {
		printf("%d\n", a1 + a2);
	}
	else{
		if (a == 2) {
			printf("%d\n", a1 - a2);
		}
		else{
			if (a == 3) {
				printf("%d\n", a1 * a2);
			}
			else{
				if (a == 4) {
					printf("%d\n", a1 / a2);
				}
			}
		}
	}
}

