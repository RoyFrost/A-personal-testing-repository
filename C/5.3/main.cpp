#include "stdio.h"
#include "string.h"


int main(){
    printf("please input a string, whose length is less than 100, including several words separated by blanks\n");
    char string1[100];
    gets_s(string1);
    printf("%s\n",string1);
    printf("%s %s\n",string1,string1);
    return 0;
}