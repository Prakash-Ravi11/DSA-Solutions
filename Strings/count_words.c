#include <stdio.h>
int main(){
    char s[200];
    fgets(s,200,stdin);
    int c=1;
    for(int i=0;s[i];i++)
        if(s[i]==' ' && s[i+1]!=' ') c++;
    printf("%d",c);
    return 0;
}
