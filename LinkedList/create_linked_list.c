#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*temp;
    int n,x; scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        temp=malloc(sizeof(struct Node));
        temp->data=x; temp->next=head;
        head=temp;
    }
    while(head){ printf("%d ",head->data); head=head->next; }
    return 0;
}
