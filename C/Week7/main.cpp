#include "stdio.h"
float fac(int n){
    float f;
    if (n<0)
        printf("n<0,???");
    else if
            (n==0||n==1) f=1;
    else
        f=fac(n-1)*n;
    return(f);
}
float power(int a){
    float k;
    if (a<0)
        printf("a<0,???");
    else if
            (a==1) k=2;
    else
        k=power(a-1)*2;
    return (k);
}
int main()
{int n,i;  float y=0;
    printf("input a positive integer n<10\n");
    scanf("%d",&n);
    if (n>=10){
        printf("???,can't you read?");
        return 0;
    }
    else
    {
        for(i=1;i<=n;i++){
            y=y+fac(i)*power(i);
           /*printf("power%d=%f\n",i,power(i));*/
           /*printf("fac%d=%f\n",i,fac(i));*/
        }
    }
    printf("result=%f",y);
}
