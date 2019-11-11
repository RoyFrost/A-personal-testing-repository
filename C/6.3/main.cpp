#include <stdio.h>
#include <string.h>
#include <string>
int main(){
    printf("plz input a string shorter than 100 characters\n");
    char *input = (char*)malloc(100*sizeof(char));
    gets(input);
    int len=strlen(input);
    if (len > 100) {
        printf("too longer!\n");
        return 0;
    }
    printf("len=%d\n",len);
    for (int i = 0; i < len; i++) {
        //if (input[i]== ' ') printf(" ");
        printf("%c",input[i]);
    }
    free(input);
    //printf("i=%d\n",i);
    /*char *storage=*(char**)((int)__iob_func()+8);
    printf("%s", storage);*/
    return 1;
}