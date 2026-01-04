#include <stdio.h>
int main(){
    int g[3][3]={{0,1,0},{1,0,1},{0,1,0}};
    int v=0;
    printf("%d ",v);
    for(int i=0;i<3;i++)
        if(g[v][i]) printf("%d ",i);
    return 0;
}
