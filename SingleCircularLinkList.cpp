#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	
	int data;
	struct node *next;
}node;


void append(node **head,int info)
{
	
	  	node *ptr=(node *)malloc(sizeof(node));
	  	ptr->data=info;
	  	ptr->next=ptr;
	  	
	  	
	  	
	  	
	if(*head==NULL)
	  {
	
	  	*head=ptr;
	      
	  }
	
else{
		node *temp=*head;
		
		while(temp->next!=*head)
		{
		temp=temp->next;
		}
	  ptr->next=*head;
		temp->next=ptr;
	}
	
		
}
	void traverse(node *head)
	{
	
	node *temp=head;
		
		do{
		
		
	printf("%d",temp->data);
	temp=temp->next;
}while(temp!=head);

	}
	


	void insertAtFront(node **head,int data)
	{
		
          node *temp=(node *)malloc(sizeof(node));
		  		temp->data=data;
		  		
		  		
		  		if(*head==NULL)
		  		{
		  			
		  		temp->next=temp;
		  		*head=temp;
				  
				  }
		else{
			
			node *ptr=*head;
			
			while(ptr->next!=*head)
			{
				ptr=ptr->next;
				
			
			}
						temp->next=*head;
			ptr->next=temp;

			*head=temp;
			
		}
	}


void deleteAtLast(node **head)
{
	
	if(*head==NULL)
	  {
	  	printf("List is empty");
	  	return;
	  }
 node *temp=*head;
 
 
node *prev=NULL; 
 while(temp->next!=*head)
 {
 	prev=temp;
 	temp=temp->next;
 }
 free(temp);
	prev->next=*head;


}



void deleteFrontNode(node **head)
{
		if(*head==NULL)
	  {
	  	printf("List is empty");
	  	return;
	
	  }
	
	node *temp=*head;
	
	while(temp->next!=*head)
	{
		temp=temp->next;
	}
	temp->next=(*head)->next;
	free(*head);
	*head=temp->next;
	
	
}








int main()
{

  node *head=NULL;
	for(int i=1;i<6;i++)
	{
	append(&head,i);
	}
	
traverse(head);
printf("\n");
insertAtFront(&head,0);

traverse(head);
deleteAtLast(&head);
printf("\n");

traverse(head);
deleteFrontNode(&head);


traverse(head);
	return 0;
	
}



