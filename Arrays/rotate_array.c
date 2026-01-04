#include <stdio.h>
int main(){
    int n,k; scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int r=0;r<k;r++){
        int last=a[n-1];
        for(int i=n-1;i>0;i--) a[i]=a[i-1];
        a[0]=last;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}

