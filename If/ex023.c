#include<stdio.h>
main()
{
	int h, m, s;

	printf("•b”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d", &s);
	if (s <= 5000) {
		h = s / 3600;
		m = (s%3600) / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[:“ü—Í‚Í‚T‚O‚O‚O‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}
