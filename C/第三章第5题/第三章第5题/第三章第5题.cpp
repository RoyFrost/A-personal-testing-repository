# include "stdio.h"
# include <math.h>
int main()
{  int n,isqrti,a,i=1,x=2,count=0;
   float sqrti;
   bool s=true;
	printf("����һ��1~1000��������n���ҳ����������и�λ��Ϊ9��������ÿ�����ʮ��\n");
	scanf_s("%i",&n);
	for (int i = 2; i <= n; i++)
	{sqrti=sqrtf(i);
	isqrti=int(sqrti);
	s=false;
		for (int x = 2; x <=isqrti; x++)
		{if (!s)
			{a=i%x;
			if (a==0)
				s=false;
			else 
				s=true;
			}	



		}
		if (x>isqrti)
		{printf("%i,",i);
		count=count+1;
	
		if (count%10==0)
			printf("\n");
		}
		printf("\n%i,",x);
	}
	



}