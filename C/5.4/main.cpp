#include <stdio.h>
#include "string.h"
char str[100];
int j;
bool checki(char s){
    return s == 'i';
}
bool checks(char s){
    return s == 's';
}
int replace(){
    int i;
    for (i=0;i<=strlen(str);i++){
        if ((checki(str[i]))&&(checks(str[i+1]))){
            str[i]='b';
            str[i+1]='e';
            j+=1;
        } else continue;
    }
    return 1;
}
int main() {
    int n;
    printf("input a string plz(the length of which should be smaller than 100), \'is\' will be replaced by \'be\'\n");
    gets_s(str);
    replace();
    if(j==0){
        printf("there's no \'is\'\n");
        return 0;
    }
    else {
        printf("%s\n", str);
        printf("replace %d \'is\'", j);
        return 1;
    }


}