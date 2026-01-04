#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n], j=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(i==0 || a[i]!=a[i-1]) a[j++]=a[i];
    for(int i=0;i<j;i++) printf("%d ",a[i]);
    return 0;
}

