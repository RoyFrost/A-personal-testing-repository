#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool check(char c){
    return (c <= '9') && (c >= '0');
}
char* eLoc(char s[]){
    char *a =strstr(s,"e");
    return a;
}
int aftere(char s[]){
    char *b= nullptr;
    b=eLoc(s);
    if (b) printf("%s",(b+1));
    else printf("no e\n");
    return 0;
}
int main(){
    int len=0;
    printf("input the maximum length of string\n");
    scanf("%d",&len);
    printf("len=%d\n",len);
    char *str=(char*)malloc(len);
    printf("input the string\n");
    scanf("%s",str);
    aftere(str);
    return 0;

}