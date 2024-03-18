//implememtation of single linked list
#include<stdio.h>
#include<stdlib.h>
//self-referencial structure
struct node{
	int data;
	struct node *next; //pointer to node
};
//ailas name
typedef struct node Node;
//taking  head at a global variable
Node *head =NULL;
void insert_at_head(int val){
//creating a newnode
Node *newNode=(Node *)malloc(sizeof(Node));
newNode->data=val;
newNode->next=NULL;
if(head==NULL){//if ther are no nodes
head=newNode;
}else{
	newNode->next=head;
	head=newNode;
}
}
void display(){
	if(head==NULL){
		printf("No nodes in display");
	}else{
		Node *temp=head;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}	
int main()
{
int ch;
//infinite loop
while(1){
printf("Enter\n1.Insert at haed\n2.Insert at tail\n3.Display\nAny other is exist")	;
scanf("%d",&ch);
if(ch ==1){
	//implement insert at haed
		int val;
	printf("Enter a value for the node to be inserted: ");
	scanf("%d",&val);
	insert_at_head(val);//function call
}
else if(ch==2)
{
	//implement insert at tail

}
else if(ch==3){
	//implement display
	display();
}
else {
	printf("thank you for the testing ADTEU!\n");
	break;
}
}
}
