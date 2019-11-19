#include <iostream>

int combine(int a[10], int b[5], int c[15]) {
    int pointa=0,pointb=0,pointc=0;
    for (; (pointa < 10)&&(pointb<5); ) {
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
    if (pointa < 10) {
        for (; (pointc < 15) && (pointa < 10);) {
            c[pointc] = a[pointa];
            pointa++;
            pointc++;

        }
    } else if (pointb < 5) {
        for (; (pointc < 15) && (pointb < 5);) {
            c[pointc] = b[pointb];
            pointb++;
            pointc++;
        }
    } else printf("wtf??");

    return 0;

}
int partion(int a[10],int low,int high){
    int key=a[low];
    int p;
    while(low<high){
        while(low<high && a[high]>=key) --high;
        p=a[low];a[low]=a[high];a[high]=p;
        while(low<high && a[low]<=key) ++low;
        p=a[high];a[high]=a[low];a[low]=p;
    }
    a[low]=key;
    return low;
}
void qsort(int a[10],int low,int high){
    int k;
    if(low<high){
        k=partion(a,low,high);
        qsort(a,low,k-1);
        qsort(a,k+1,high);
    }
}
void insertsort(int a[5], int b[5]){
    b[0]=a[0];
    int count=0;
    for (int i = 1; i < 5; i++) {
        if (a[i]<=b[0]){
            for (int j = count; j >=0 ; j--) b[j+1]=b[j];
            b[0]=a[i];
            count++;
        }
        else if (a[i]>b[count]) {
            b[count+1]=a[i];
            count++;
        }
        else{
            for (int j = 0; j <count; j++) {
                if((b[j]<a[i])&&(a[i]<=b[j+1])) {
                    for (int k = count; k >=j+1 ; k--) b[k+1]=b[k];
                    b[j+1]=a[i];
                    count++;
                }
            }
        }
    }
}
int bisearch(int a[15],int n){
    int t=14,b=0,m;
    while (b<=t){
        m=(t+b)/2;
        if (a[m]==n) return m+1;
        else if(a[m]<n) b=m+1;
        else t=m-1;
    }
    return 0;
}

int main() {
    int a[10];
    int b[5];
    int d[5];//output of insertsort
    int c[15];//output of combine
    int e=8,f;
    printf("input 5 int for insertsort (seperated by blanks) \n");
    for (int j = 0; j < 5; j++) scanf_s("%d",&b[j]);
    insertsort(b,d);
    printf("input 10 int for qsort (seperated by blanks) \n");
    for (int j = 0; j < 10; j++) scanf_s("%d",&a[j]);
    qsort(a,0,9);
    combine(a,d,c);
    for (int i = 0; i < 15; i++) printf("%d ",c[i]);
    putchar('\n');
    printf("input a int for binarysearch \n");
    scanf_s("%d",&e);
    f= bisearch(c,e);
    if (f) printf("one of its position (if there exist more than one) is %d",f);
    else printf("Not found!");
    return 0;

}