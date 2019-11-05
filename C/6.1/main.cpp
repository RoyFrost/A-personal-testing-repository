#include <stdio.h>
int a[5][5];
void getmatrix(){
    printf("plz input a 5*5 matrix, 25 elements separated by blanks\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf_s("%d", &a[i][j]);
        }
    }
}
void checkmatricx(){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int output(){
    int sum=0;
    int *p;
    p=&a[0][0];
    for (int i = 0; i < 25; i++) {
        if ((i%4==0)||(i%6==0))
            sum=sum+*(p+i);
        else continue;
    }
    return sum;
}
int main() {
    int sum;
    getmatrix();
    //checkmatricx();//just for check
    sum=output();
    printf("%d",sum);
}
