#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*start=NULL;;
add_beg(int data)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->info=data;
	new->next=start;
	start=new;
}
add_end(int data)
{
	struct node *new, *temp;
	new=(struct node*)malloc(sizeof(struct node));
	new->info=data;
	new->next=NULL;
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		
	}
	temp->next=new;
}
del_beg()
{
	struct node*temp;
	temp->next;
	start=start->next;
	free(temp);	
}
del_end()
{
	struct node *temp,*ptr;
	temp=start;
	while(temp->next->next!=NULL)
	
		temp=temp->next;
		ptr=temp->next;
		temp->next=NULL;
		free(ptr);
	
}
display()
{	
	struct node *temp;
	temp=start;
	printf("");
	while(temp!=NULL)
	{
		printf("\ndata=%d		 present address=%u 	next address=%u",temp->info,temp,temp->next);
		temp=temp->next;
	}
}

search(int data)
{	struct node *temp;
	temp=start;

while((data != temp->info)||(temp==NULL))
	{	
	temp=temp->next;	
		
	}
	
		
	

		if(temp==NULL)
		{	
			printf("data not found");
		}
				else 
		{	
			printf("\ndata=%d		 present address=%u 	next address=%u\n",temp->info,temp,temp->next);
		}
	
	
}

int main()
{	
	int n,m,u;
	while(1)
	{
	
	printf("enter choice:\n");
	printf("1.ADD AT BEG.\n2.ADD AT END\n3.DELETE FROM BEG.\n4.DELETE FROM END\n5.DISPLAY\n6.TO SEARCH ELEMENT\n");
	
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{	printf("enter the data to be added at the beginning:\n");
			scanf("%d",&m);
			add_beg(m);
			break;
			}
		case 2:
		{	printf("enter the data to be entered at the end:\n");
				scanf("%d",&m);
			add_end(m);
			break;	
		}
		case 3:
		{	printf("element from beg. is deleted\n");
			del_beg();
			break;
		}
			case 4:
		{	printf("element from end is deleted\n");
			del_end();
			break;
		}
		case 5:
		{	printf("the output is\n");
			display();	
			printf("\n");
			break;
		}
		case 6:
			{
				printf("enter the element to be searched:\n");
				scanf("%d",&u);
				search(u);
				break;
				
			}
	}
}
}
