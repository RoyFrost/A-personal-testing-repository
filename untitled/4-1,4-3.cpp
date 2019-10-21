#include <stdio.h>
#include <string.h>


int ch4the3rd(){
    int i,j,k,a,b,c;
    char input[100];
    char outputmath[10];
    char outputchar[26];
    char outputcapital[26];
    int len;
    printf("please input a string which has a length no longer than 99\n");
    scanf("%s",&input);
    len = strlen(input);
    for(i=0; i < len; i++) {
        if ((input[i] <= 122 && input[i] >= 97)) {
            a= input[i] - 97;
            outputchar[a] = input[i];
        }

        else if ((input[i]<=57) &&(input[i]>=48)) {
            b= input[i] - 48;
			outputmath[b] = input[i];}
        else if ((input[i]<=90) &&(input[i]>=65)) {
            c= input[i] - 65;
            outputcapital[c] = input[i];
        }
        else continue;
    }
    printf("charcters:");
    for(j=0; j<26;j++) {
        if ((outputchar[j] <= 122) && (outputchar[j] >= 97))
            printf("%c", outputchar[j]);
        else continue;
    }
	printf("\n");
    printf("capitals:");
    for(j=0; j<26;j++) {
        if ((outputcapital[j] <= 90) && (outputcapital[j] >= 65))
            printf("%c", outputcapital[j]);
        else continue;
    }
    printf("\n");
    printf("numbers:");
    for(k=0;k<10;k++){
        if ((outputmath[k]<=57) &&(outputmath[k]>=48))
        printf("%c", outputmath[k]);
        else continue;
    }
    printf("\n");
	return 0;
}

int sixteen()
{
    int num;
    printf("来一个十进制正整数，然后让我们把它变成十六进制哈哈哈！\n");
    scanf_s("%d",&num);
    printf("%x",num);//直接利用了不同的输出格式
	return 0;

}
int sixteen2()
{
    int num, m, c, i = 0;
    int n = 16;
    int a[4];
    printf("(转换为十六进制)输入一个三位正整数：\n");
    scanf_s("%d", &num);
    if (num<0||num>999)
    {printf("error(are U kidding?)\n");
        return 0;}

    m = num;
    while (num>0)
    {
        c = (num % n);
        a[i] = c;
        num = num / n;
        i++;
    }
    printf("十进制数%d转换成十六进制数是：", m);
    for (i--; i >= 0; i--)
        printf("%x", a[i]);
    printf("\n");
	return 0;
}

int eight()
{
    int num, m, c, i = 0;
    int n = 8;
    int a[4];
    printf("(转换为八进制)输入一个三位正整数：\n");
    scanf_s("%d", &num);
    if (num<0||num>999)
    {printf("error(are U kidding?)\n");
        return 0;}

    m = num;
    while (num>0)
    {
        c = (num % n);
        a[i] = c;
        num = num / n;
        i++;
    }
    printf("十进制数%d转换成八进制数是：", m);
    for (i--; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
	return 0;
}
int ch4the1st()
{   int c;
    printf("1.to sixteen(a joke)\n");
    printf("2.to sixteen2\n");
    printf("3.to eight\n");
    printf("what's your choice?(doge\n");
    scanf_s("%d",&c);
    switch (c)
    {
        case 1: sixteen();
            break;
        case 2: sixteen2();
            break;
        case 3: eight();
            break;
        default:
            printf("error!\n");
            break;

    }
    return 0;
}
void main(){
    int c;
    printf("1. question 4.1\n");
    printf("2. question 4.3\n");
    printf("which question you want to check?(doge\n");
    scanf_s("%d",&c);
    switch (c)
    {
        case 1: ch4the1st();
            break;
        case 2: ch4the3rd();
            break;
        default: printf("damn, can't you read English?\n");
            break;

    }

}