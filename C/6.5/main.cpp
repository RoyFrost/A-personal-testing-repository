#include <stdio.h>
#include <string>

int main(){
    char *input = (char*)malloc(10*sizeof(char));
    int m,len;
    printf("plz input a string\n");
    scanf("%s",input);
    len = strlen(input);
    printf("plz input a natural integer \'m\' as the location of reversing characters.(reverse from m to m+5,m begins from 0)\n");
    scanf("%d",&m);


    if ((m>=len)||(m<0)) {
        printf("\'%d\' is out of string length!\n",m);
        return 0;
    }
    else if ((m+5)>len){
        int a;
        a = (len-m)/2;
        printf("a=%d\n",a);
        char temp;
        for (int i = 0; i < a ; i++) {
            temp = input[len-1-i];
            printf("temp=%c\n",temp);
            input[len-1-i]=input[m+i];
            input[m+i] = temp;
            //printf("%c",temp);
        }

    }
    else {
        char temp;
        for (int i = 0; i < 3 ; i++) {
            temp = input[m + 5 - i];
            input[m + 5 - i] = input[m + i];
            input[m + i] = temp;
            //printf("%c", temp);
        }
    }
    for (int j = 0; j < len; j++) {
        printf("%c",input[j]);
    }

    return 0;

}