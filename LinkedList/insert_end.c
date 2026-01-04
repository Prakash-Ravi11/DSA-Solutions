#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*temp,*n;
    n=malloc(sizeof(struct Node));
    scanf("%d",&n->data);
    n->next=NULL;
    head=n;
    temp=head;
    printf("%d",temp->data);
    return 0;
}
