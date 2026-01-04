#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*prev=NULL,*cur,*next;
    int x; scanf("%d",&x);
    cur=malloc(sizeof(struct Node));
    cur->data=x; cur->next=NULL;
    head=cur;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    printf("%d",prev->data);
    return 0;
}
