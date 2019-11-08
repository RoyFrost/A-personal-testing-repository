#include <cstdio>
#include <cstring>
char string1[100];
bool check(char s){
    return ((s <= 'z') && (s >= 'a')) || ((s <= 'Z') && (s >= 'A'));
}//directly only output english words, no matter separated by blanks or other things
bool isa(char r){
    return r == 'a';
}
int longest(char str[]){
    int i,len=0,mlen=0,mloc=0; //rolling and locating
    bool a= false;//whether contains a, a temp variable
    int loc=0; //location of the beginning of the word we want to output
    bool j=true;//signal for beginning to calculate the len of the word
    for (i = 0; i <=strlen(str); i++) {
        if (check(string1[i])){
            if (j){
                j= false;//click!
                loc = i;
                if (isa(string1[i]))
                    a = isa(string1[i]);
            }
            else {
                len+=1;
                if (isa(string1[i]))
                a = isa(string1[i]);
            }

        }
        else{
            j = true; //turn back
            printf("len=%d\n",len);
            printf("loc=%d\n",loc);
            if (a){
                if (len > mlen){
                mlen = len;
                mloc = loc;
                a = false;
                len = 0;
                }

            }
            else len = 0;
            /*if (len>mlen) {
                mlen = len;
                mloc = loc;
            }
            len =0;*/
        }

    }
    return mloc;
}
int main(){
    int i,j;
    bool b= false;
    printf("please input a string, whose length is less than 100, including several words separated by blanks\n");
    gets_s(string1);
    for (j = 0; j <= strlen(string1); ++j) {
        if (isa(string1[j]))
        b = true;
    }
    if (!b) {
        printf("no a contained!!!\n");
        return 0;
    }
    else{
        for (i=longest(string1); check(string1[i]) ; i++) {
            printf("%c",string1[i]);

        }
    }
    return 1;

}
