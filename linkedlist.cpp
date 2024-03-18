#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    //temp variable to traverse
    struct node *temp=head;
    while(temp !=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    struct node *n2=(struct node *)malloc(sizeof(struct node));
    struct node *n3=(struct node *)malloc(sizeof(struct node));
    struct node *n4=(struct node *)malloc(sizeof(struct node));
    struct node *n5=(struct node *)malloc(sizeof(struct node));
    // Inserting data
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;
    //linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    struct node*head=n1;
    display(head);
    /*printf("%d\n",n1->data);                        10
    printf("%d\n",n1->next->data);                    20
    printf("%d\n",n1->next->next->data);              30
    printf("%d\n",n1->next->next->next->data);        40
    printf("%d\n",n1->next->next->next->next->data);  50*/


}
