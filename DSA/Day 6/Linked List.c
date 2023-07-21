#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void delete(int data) {
    struct node *temp = head;
    struct node *prev = NULL;
    if (head->data == data) {
        head = head->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int ch,element;
    while (1){
        printf("1.Insert\n2.Delete\n3.Display\n4. Exit\nEnter choice:");
        scanf("%d",&ch);
        if (ch==1){
            scanf("%d",&element);
            insert(element);
        }
        else if (ch==2){
            scanf("%d",&element);
            delete(element);
        }
        else if (ch==3){
            display();
        }
        else{
            exit (0);
        }
    }
    return 0;
}