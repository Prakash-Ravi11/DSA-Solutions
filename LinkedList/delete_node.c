#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* next;};
int main(){
    struct Node *head=NULL,*temp;
    int x; scanf("%d",&x);
    temp=malloc(sizeof(struct Node));
    temp->data=x; temp->next=NULL;
    free(temp);
    printf("Deleted");
    return 0;
}
