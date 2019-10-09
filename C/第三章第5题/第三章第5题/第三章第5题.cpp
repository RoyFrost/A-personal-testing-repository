# include "stdio.h"
# include <math.h>
int main()
{  int n,k,i,x,count=0;
	printf("输入一个1~1000的正整数n，找出区间内所有个位不为9的素数，每行输出十个\n");
	scanf_s("%i",&n);
	if ((n<1)|(n>1000)) {printf("error,U SB\n");return 0;}
	for (i = 2; i <= n; i++)
	{k=int(sqrtf(i));
		for (x = 2; x <= k; x++)
		{if (i%x==0) break;
		if (i%10==9) break;
		}
		if (x>k) 
		{printf("%i,",i);
		count++;
		if(count%10==0)	printf("\n");
		}
						
			
	}
	return 0;
}

