#include <stdio.h>
#include <stdlib.h>
#include <string>
bool check(char a,char b){
    return a==b;
}
int main(){
    int len;
    printf("input the maximum length of the string\n");
    scanf("%d",&len);
    char *str=(char*)malloc(len);
    printf("input the string\n");
    scanf("%s",str);
    int lens =strlen(str);
    /*for (int i = 0; i < lens; i++) {
        printf("%c",*(str+i));
    }
    putchar('\n');
    printf("lens=%d\n",lens);*/
    int half=lens/2;
    bool click = false;
    for (int j = 0; j <half ; j++) {
        if (check(*(str+j),*(str+lens-j-1)) ) click= true;
        else {
            click = false;
            break;
        }
    }
    if (click) printf("yep\n");
    else printf("nope\n");
    return 0;

}