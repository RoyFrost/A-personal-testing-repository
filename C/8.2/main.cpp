#include <stdio.h>
struct dates{
    int year;
    int month;
    int day;
};
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
struct dates date[2];
int getdate(int a){
    printf("the %d date: input the year(2018/2019)\n",a);
    scanf("%d",&date[a-1].year);
    if ((date[a-1].year!=2018)&&(date[a-1].year!=2019)) {
        printf("error!\n");
        return 0;
    }
    printf("the %d date: input the month(1,2,...,12)\n",a);
    scanf("%d",&date[a-1].month);
    if ((date[a-1].month<1)||(date[a-1].month>12)){
        printf("error!\n");
        return 0;
    }
    printf("the %d date: input the day of the month\n",a);
    scanf("%d",&date[a-1].day);
    if ((date[a-1].day<1)||(date[a-1].day>days[date[a-1].month-1])){
        printf("error!\n");
        return 0;
    }
    return 1;
}
int calcu(int sum){
    if (date[0].month>date[1].month){
        sum = date[0].day;
        for (int i = date[1].month; i < date[0].month; ) {
            sum+=days[i-1];
            i++;
        }
        sum = sum- date[1].day;
    } else{
        sum = date[1].day;
        for (int i = date[0].month; i < date[1].month; ) {
            sum+=days[i-1];
            i++;
        }
        sum = sum- date[0].day;
        if (sum<0) sum = -sum;
    }
    //printf("sum=%d\n",sum);
    return sum;
}
int main(){
    int flag,sum=0;
    int count =1;
    for (;count<3;) {
        do {
            flag = getdate(count);
        } while (!flag);
        count++;
    }
    if (date[0].year==date[1].year){
        sum=calcu(sum);
    }else if (date[0].year>date[1].year) {
        if (date[0].month>date[1].month){
            sum=365+calcu(sum);
        } else if(date[0].month==date[1].month){
            if (date[0].day>date[1].day){
                sum=365+calcu(sum);
            } else {
                sum =365 - calcu(sum);
            }
        } else{
            sum = 365 -calcu(sum);
        }
    }else {
        if (date[0].month>date[1].month){
            sum=365-calcu(sum);
        } else if(date[0].month==date[1].month){
            if (date[0].day>date[1].day){
                sum=365-calcu(sum);
            } else {
                sum =365 + calcu(sum);
            }
        } else{
            sum = 365 +calcu(sum);
        }
    }
    if (sum<0) sum = -sum;
    printf("It's %d days apart",sum);
    return 1;

}