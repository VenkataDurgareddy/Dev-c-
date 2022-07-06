#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*createll(struct node*);
void display(struct node*);
struct node*delete_beg(struct node*);
struct node*delete_end(struct node*);
struct node*delete_after(struct node*);
void main()
{
	int option;
	do
	{
		printf("\n***MAIN MENU***");
		printf("\n1:create a list");
		printf("\n2:Display the list");
		printf("\n3:Delete a node at the beginning of the list");
		printf("\n4:Delete a node at th eend of the end of the list");
		printf("\n5:Delete a node after a particular node in the list");
		printf("\n6:EXIT");
		printf("\nEnter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				start=createll(start);
				printf("\nLinked list is created");
				break;
			case 2:
				display(start);
				break;
			case 3:
				start=delete_beg(start);
				printf("\nFirst node is sucessfully deleted");
				break;
			case 4:
				start=delete_end(start);
				printf("\nLast node is sucessfully deleted");
				break;
			case 5:
				start=delete_after(start);
				printf("\nNode is successfully deleted");
				break;
		}
	}while(option!=6);
}
struct node*createll(struct node*start)
{
	struct node*newnode;
	struct node*ptr;
    int num;
    printf("\nEnter the data or-1 to end:");
    scanf("%d",&num);
    while(num!=-1)
    {
    	newnode=(struct node*)malloc(sizeof(struct node));
    	newnode->data=num;
    	if(start==NULL)
    	{
    		newnode->next=NULL;
    		start=newnode;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
			newnode->next=NULL;
		}
		printf("\nEnter the data or-1 to end");
		scanf("%d",&num);
	}
	return start;
}
void display(struct node*start)
{
	struct node*ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
struct node*delete_beg(struct node*start)
{
	struct node*ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}
struct node*delete_end(struct node*start)
{
	struct node*ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
	return start;
}
struct node*delete_after(struct node*start)
{
	struct node*ptr,*preptr;
	int val;
	printf("\nEnter the value after which the node has to be deleted");
	scanf("%d",&val);
	ptr=start;
	preptr=start;
	if(preptr->data==val)
	ptr=ptr->next;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
	return start;
}
