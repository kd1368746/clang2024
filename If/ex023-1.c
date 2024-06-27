#include<stdio.h>
main()
{
	int h, m, s;

	printf("•b”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d", &s);
	if(s>=0){
		if (s <= 5000) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = s % 60;
			printf("%dŽžŠÔ%d•ª%d•b\n", h, m, s);
		}
	
	else {
		printf("ƒGƒ‰[:“ü—Í‚Í‚T‚O‚O‚O‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
	}
	else{
		printf("ƒ}ƒCƒiƒX‚ÍƒGƒ‰[‚Å‚·\n");
	}
	
	}

