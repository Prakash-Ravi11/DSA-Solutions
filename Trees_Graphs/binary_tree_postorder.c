#include <stdio.h>
#include <stdlib.h>
struct Node{int d; struct Node *l,*r;};
void post(struct Node* n){
    if(n){ post(n->l); post(n->r); printf("%d ",n->d); }
}
int main(){
    struct Node *n=malloc(sizeof(struct Node));
    n->d=1; n->l=n->r=NULL;
    post(n);
    return 0;
}
