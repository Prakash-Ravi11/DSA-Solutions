#include <stdio.h>
#include <stdlib.h>
struct Node{int d; struct Node *l,*r;};
struct Node* ins(struct Node* n,int x){
    if(!n){
        n=malloc(sizeof(struct Node));
        n->d=x; n->l=n->r=NULL;
    } else if(x<n->d) n->l=ins(n->l,x);
    else n->r=ins(n->r,x);
    return n;
}
int main(){
    struct Node* r=NULL;
    r=ins(r,5); r=ins(r,3); r=ins(r,7);
    printf("BST Created");
    return 0;
}
