#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
int main()
{
	struct node*head;
	head = NULL;
	printf("%s  %d",head,head);
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	printf("\n %d",head);
	printf("\n %d",head->data);
	free(head);
	printf("\n%d",head);
	printf("\n %d",head->data);	
}