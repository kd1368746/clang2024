#include<stdio.h>
main()
{
	//®”Œ^•Ï”i‚Æ—v‘f”‚T‚Â‚Ì”z—ñdata‚ğéŒ¾
	int i, data[5];
	//i‚ğ‚O‚©‚ç‚S‚É•Ï‰»
	for (i = 0; i < 5; i++) {
		//“ü—Í‚ğ‘«‚·
		printf("”z—ñdeta[%d]=", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 5; i++) {
		//‚O‚©‚ç‚S‚Ü‚Å‚ğ•Ï‰»‚µ‚È‚ª‚ç•\¦
		printf("data[%d]=5d\n", i, data[i]);
	}
}