#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *n=malloc(sizeof(struct Node));
    n->data=10; n->next=NULL;
    if(n->data==10) printf("Found");
    else printf("Not Found");
    return 0;
}
