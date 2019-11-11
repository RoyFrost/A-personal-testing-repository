#include "stdio.h"
#include <string.h>

/*int main(){
    char a[21],b[21];
    gets(a);
    gets(b);
    if (strstr(a,b)) printf("yep");
    else printf( "nope");
    return 0;

}*/


int main(int argc,char *argv[]){
    /*while(argc>1){
        ++argv;
        printf("%s ",*argv);
        --argc;
    }*/
    if (strstr(argv[1],argv[2])) printf("yep");
    else printf( "nope");
    return 0;


}
