#include <stdio.h>

int main() {
    int a[5]={1,6,8,9,10}, b[4]={2,13,18,20};
    int c[9];
    for (int & j : c) j=0;
    int pointa=0,pointb=0,pointc=0;
    for (; (pointa < 5)&&(pointb<4); ) {
        if (a[pointa]<=b[pointb]) {
            c[pointc]=a[pointa];
            pointa+=1;
            pointc+=1;
        }
        else {
            c[pointc]=b[pointb];
            pointb+=1;
            pointc+=1;
        }
    }
        if (pointa < 5) {
            for (; (pointc < 9) && (pointa < 5);) {
                c[pointc] = a[pointa];
                pointa++;
                pointc++;

            }
        } else if (pointb < 5) {
            for (; (pointc < 9) && (pointb < 4);) {
                c[pointc] = b[pointb];
                pointb++;
                pointc++;
            }
        } else printf("wtf??");
    for (int i : c) {
        printf("%d ",i);
    }

}