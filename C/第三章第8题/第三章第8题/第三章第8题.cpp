# include "stdio.h"
# include <math.h>
float main()
{int n,i;
float h=100;
	printf("你想让你的球在阶梯上弹几次？输入一个正整数n\n");
	scanf_s("%i",&n);
	for (i = 1; i <= n; i++) h=(h+20.0)*2/3;
	printf("%.2f cm\n",h);
	return 0;
}