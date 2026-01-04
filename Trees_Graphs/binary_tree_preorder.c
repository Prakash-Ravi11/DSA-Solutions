#include <stdio.h>
#include <stdlib.h>
struct Node{int d; struct Node *l,*r;};
void pre(struct Node* n){
    if(n){ printf("%d ",n->d); pre(n->l); pre(n->r); }
}
int main(){
    struct Node *n=malloc(sizeof(struct Node));
    n->d=1; n->l=n->r=NULL;
    pre(n);
    return 0;
}
