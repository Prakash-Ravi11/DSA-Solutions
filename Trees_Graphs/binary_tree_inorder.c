#include <stdio.h>
#include <stdlib.h>
struct Node{int d; struct Node *l,*r;};
void inorder(struct Node* n){
    if(n){ inorder(n->l); printf("%d ",n->d); inorder(n->r); }
}
int main(){
    struct Node *n=malloc(sizeof(struct Node));
    n->d=1; n->l=n->r=NULL;
    inorder(n);
    return 0;
}
