#include <stdio.h>
#include <stdlib.h>
int main(void)
{ char * buf;
    int n= 16;
    buf=(char *)malloc(n);
    while( fgets(buf,n,stdin) != nullptr )
    {	fputs(buf,stdout);
        puts(buf);
    }
    return 0;
}