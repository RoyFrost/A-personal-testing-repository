#include <stdio.h>
#include <string.h>
struct stat{
    int length;
    int space;
    int character;
    int digit;
};
struct stat stata,statb;
bool result[4];
char item[4][10] = {"length","space","character","digit"};
int countspace(char str[11]){
    int count=0;
    for (int i = 0; i < strlen(str); ++i) {
        if ( str[i] == ' ') count+=1;
        else continue;
    }
    return count;
}
int countchar(char str[11]){
    int count=0;
    for (int i = 0; i < strlen(str); ++i) {
        if (((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))) count+=1;
        else continue;
    }
    return count;
}
int countdigit(char str[11]){
    int count=0;
    for (int i = 0; i < strlen(str); ++i) {
        if ((str[i]<='9')&&(str[i]>='0')) count+=1;
        else continue;
    }
    return count;
}
int compare(stat a,stat b){
    result[0]=(a.length==b.length);
    result[1]=(a.space==b.space);
    result[2]=(a.character==b.character);
    result[3]=(a.digit==b.digit);
    return 0;
}
int main() {
    char a[11],b[11];
    printf("input the first string(length<=10):\n");
    gets(a);
    fflush(stdin);
    printf("input the second string(length<=10):\n");
    gets(b);
    fflush(stdin);
    stata.length=strlen(a);
    statb.length=strlen(b);
    stata.space=countspace(a),statb.space=countspace(b);
    stata.character=countchar(a),statb.character=countchar(b);
    stata.digit=countdigit(a),statb.digit=countdigit(b);
    /*printf("lena=%d,lenb=%d\n",stata.length,statb.length);
    for (int i = 0; i < stata.length; i++) {
        printf("%c",a[i]);
    }
    printf("\n");
    for (int i = 0; i < statb.length; i++) {
        printf("%c",b[i]);
    }
    printf("\n");
    printf("aspace=%d,bspace=%d\n",stata.space,statb.space);
    printf("achar=%d,bchar=%d\n",stata.character,statb.character);
    printf("adigit=%d,bdigit=%d\n",stata.digit,statb.digit);*/
    compare(stata,statb);
    printf("the same:");
    for (int j = 0; j <= 3; j++) {
        if (result[j]) printf("%s ",item[j]);
        else continue;
    }
    putchar('\n');
    printf("different:");
    for (int j = 0; j <= 3; j++) {
        if (!result[j]) printf("%s ",item[j]);
        else continue;
    }
    return 0;
}
