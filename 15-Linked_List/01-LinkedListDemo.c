#include <stdio.h>
#include <stdlib.h>

struct  node {
    int data;
    struct node *next;
};

void main(){
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *four = NULL;
    struct node *five = NULL;
    struct node *six = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    if(head || !second || !third){

        head->data = 10;
        head->next = second;

        second->data = 20;
        second->next = third;

        third->data = 30;
        third->next = four;

        four->data = 40;
        four->next = five;

        five->data = 50;
        five->next = six;

        six->data = 60;
        six->next = NULL;
    }
    else
    {
        printf("Memory allocation failed");
    }

    //printing
    struct node *temp = head;
    while (temp != NULL){
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
