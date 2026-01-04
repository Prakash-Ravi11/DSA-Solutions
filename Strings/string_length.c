#include <stdio.h>
int main(){
    char s[100]; scanf("%s",s);
    int i=0; while(s[i]) i++;
    printf("%d",i);
    return 0;
}
