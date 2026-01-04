#include <stdio.h>
int power(int a,int b){ return b==0?1:a*power(a,b-1); }
int main(){
    int a,b; scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
