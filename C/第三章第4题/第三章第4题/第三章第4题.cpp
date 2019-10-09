# include "stdio.h"
# include <math.h>
float main()
{
	float n,sum = 0, a;
	printf("Please input a positive integer n(not to big!), to calculate 1^2/(1+1)+2^2/(2+1)+3^2/(3+1)+......+n^2/(n+1)\n");
	scanf_s("%f",&n);
	for (int i = 1; i <= n; i++)
	{a=powf(i,2)/(i+1);
	 sum=sum+a;
	}
	printf("%f\n",sum);
	return 0;


}