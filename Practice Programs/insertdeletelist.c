#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct node* insert(struct node *start,int m ) 
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->val=m;
	temp->next=start;
	return temp;
}
struct node* delete(struct node *start,int m)
{
	if(start==NULL)
		return NULL;
	struct node *temp,*dummy;
	if(start->val==m)
	{
		temp=start->next;
		free(start);
		return temp;
	}
	temp=start;
	while(temp->next)
	{
		if(temp->next->val==m)
		{
			dummy=temp->next;
			temp->next=temp->next->next;
			free(dummy);
			break;
		}
		temp=temp->next;
	}
	return start;
}
int main()
{
	struct node *start,*iter;
	start=NULL;
	iter=NULL;
	int i,m;
	for(i=0;i<3;i++)
	{ 
	scanf("%d",&m);
	start=insert(iter,m);
	iter=start;
        }
i=0;
while(i<3)
{
	printf("%d",start->val);
	start=start->next;
	i++;
}
printf("\n");
start=delete(iter,1);
i=0;
while(i<1)
{
	printf("%d",start->val);
	start=start->next;
	i++;
}
printf("\n");
return 0;
}
