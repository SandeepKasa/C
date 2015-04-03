#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct node* sortinsert(struct node *start,int m ) 
{
	struct node *temp;
	struct node *dum,*prev;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=start;
	prev=NULL;
	while(temp)
	{
		if(temp->val>=m)
		{
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	dum=(struct node*)malloc(sizeof(struct node));
	dum->val=m;
	dum->next=temp;
	if(prev==NULL)
	{
		return dum;
	}
	else
	{
		prev->next=dum;
		return start;
	}
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
	start=sortinsert(iter,m);
	iter=start;
        }
i=0;
while(i<3)
{
	printf("%d ",start->val);
	start=start->next;
	i++;
}
printf("\n");
return 0;
}
