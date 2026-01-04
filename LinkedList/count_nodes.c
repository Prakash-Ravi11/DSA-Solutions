#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*n;
    int count=0;
    n=malloc(sizeof(struct Node));
    n->next=NULL;
    head=n;
    while(head){ count++; head=head->next; }
    printf("%d",count);
    return 0;
}
