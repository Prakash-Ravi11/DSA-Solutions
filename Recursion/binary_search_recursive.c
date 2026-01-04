#include <stdio.h>
int bs(int a[],int l,int r,int x){
    if(l>r) return 0;
    int m=(l+r)/2;
    if(a[m]==x) return 1;
    return a[m]>x?bs(a,l,m-1,x):bs(a,m+1,r,x);
}
int main(){
    int a[]={1,2,3,4,5};
    printf(bs(a,0,4,3)?"Found":"Not Found");
    return 0;
}
