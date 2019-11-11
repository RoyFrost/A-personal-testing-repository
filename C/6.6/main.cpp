#include <stdio.h>
bool check (char s){
    return ((s < 'k') && (s > 'e')) || ((s > '0') && (s < '9'));
}

int main() {
    char a[21];
    printf("plz input string shorter than 20 characters\n");
    gets(a);
    int count=0;
    for (int i=0;i<=20;i++){
        if (check(a[i])) count +=1;
        else continue;
    }
    printf("count=%d",count);
    return 0;
}