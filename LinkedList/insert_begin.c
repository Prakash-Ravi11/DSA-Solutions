#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*n;
    n=malloc(sizeof(struct Node));
    scanf("%d",&n->data);
    n->next=head; head=n;
    printf("%d",head->data);
    return 0;
}
