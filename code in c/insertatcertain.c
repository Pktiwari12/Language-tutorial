#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
void insert_at_end(struct node**head1,int newdata)		//double is used because if linked list is empty then we store the address of first node in the head of main function
{
	if(*head1 == NULL)						// LIst is empty
	{
		struct node*temp;
		temp = (struct node*)malloc(sizeof(struct node));			// Creating first new node
		if(temp==NULL)
		{
			printf("Memory is not allocated.");
			exit(0);
		}
		temp->data = newdata;
		temp->link = NULL;
		*head1 = temp;
		
	}
	else{
	struct node*temp=NULL;					// For creating a new node
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory is not allocated .");
		exit(0);
	}
	temp->data = newdata;
	temp->link = NULL;
	struct node*ptr = NULL;					// For travershing means finding the last node in existing linked list
	ptr = *head1;
	while(ptr->link!=NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
	}
}


void printlinkedlist(struct node*head)
{
	if(head == NULL)
	{
		printf("The linked list is empty.");
	}
	struct node *ptr=NULL;
	ptr  = head;
	printf("The linked list elements =\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr = ptr->link;
	}
}
int main()
{
    struct node*head=NULL;
    head = (struct node*)malloc(sizeof(struct node));
    insert_at_end(&head,56);
   // insert_at_certain(&head,56,5)
   printlinkedlist(head);
    return 0;

}