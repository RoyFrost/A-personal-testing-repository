# include "stdio.h"
# include <math.h>
float main()
{int n,i;
float h=100;
	printf("������������ڽ����ϵ����Σ�����һ��������n\n");
	scanf_s("%i",&n);
	for (i = 1; i <= n; i++) h=(h+20.0)*2/3;
	printf("%.2f cm\n",h);
	return 0;
}