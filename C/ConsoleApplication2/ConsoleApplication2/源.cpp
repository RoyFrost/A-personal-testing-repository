#include <stdio.h>
#include <string>
char *input = (char*)malloc(sizeof(char));
void checkstorage(){
    char *storage=*(char**)((int)__iob_func()+8);
    printf("storage= %s", storage);
}
void checkpointer(){
    printf("pointer= %d\n",input[0]);
}
int main(){
    int p,len;
    scanf_s("%s",input,88);
    len = strlen(input);
    checkstorage();
    checkpointer();
	return 0;


}