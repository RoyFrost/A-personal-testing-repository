#include <stdio.h>
#include <string.h>
#include <string>
int main(){
    char *input = (char*)malloc(10*sizeof(char));
    gets(input);
    int len=strlen(input);
    printf("len=%d\n",len);
    for (int i = 0; i < len; i++) {
        //if (input[i]== ' ') printf(" ");
        printf("%c",input[i]);
    }
    /*char *storage=*(char**)((int)__iob_func()+8);
    printf("%s", storage);*/
    return 0;
}