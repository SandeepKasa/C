#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
typedef struct node
{
	int no;
	char c[13];
	char s;
	struct node *next;
}node;
void append(node *head,int i)
{
	char copy[13];
	int j=1;
	for(j=1;j<=i;j++)
	{
		while(head->next!=NULL)
			head=head->next;
		node *temp;
		temp=(node *)malloc(sizeof(node));
		scanf("%s",temp->c);
		//getchar();
		temp->s=temp->c[0];
		temp->next=NULL;
		head->next=temp;
		head=temp;
	}
}
void find(node *start)
{	char f;
	char pnt[10000][13];
	char temp[13];
	long long int count=0,i,j;
	scanf("%c",&f);
	while(start->next!=NULL)
	{
		if(start->s==f)
		{
			strcpy(pnt[count],start->c);
			count++;
		}
		start=start->next;
	}
	if(start->next==NULL && start->s==f)
	{
		strcpy(pnt[count],start->c);
		count++;
	}
	qsort(pnt,count,13,(int(*)(const void*,const void*))strcmp);
	if(count==0)
		printf("\n");
	else
	{
		for(i=0;i<count;i++)
			printf("%s\n",pnt[i]);
	}
}
void insert(node *start)
{
	char copy[13];
	while(start->next!=NULL)
		start=start->next;
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->next=NULL;
	start->next=temp;
	scanf("%s",temp->c);
	temp->s=temp->c[0];
	start=temp;
}
/*void display(node *ptr)
  {

  while(ptr->next!=NULL)
  {printf("%s\n",ptr->c);
  ptr=ptr->next;
  }
  printf("%s\n",ptr->c);
  }*/
void delete(node *ptr)
{
	char find[13];
	node *temp;
	long long int N;
	scanf("%s",find);
	while(ptr->next!=NULL)
	{
		int q;
		q=strcmp(ptr->next->c,find);
		if(q==0)
		{
			temp=ptr->next;
			ptr->next=ptr->next->next;
			free(temp);
			break;
		}
		ptr=ptr->next;
	}
}
int main()
{
	long long int N,i;
	scanf("%lld",&N);
	node *head,*start;
	head=(node *)malloc(sizeof(node));
	start=(node *)malloc(sizeof(node));
	start=head;
	head->next=NULL;
	head->no=0;
	append(head,N);
	long long int Q,j;

	scanf("%lld",&Q);
	for(j=1;j<=Q;j++)
	{
		int n;
		scanf("%d",&n);
		if(n==3)
		{
			getchar();
			//printf("halou\n");
			head=start;
			find(head);
		}
		if(n==1)
		{
			head=start;
			insert(head);

		}

		if(n==2)
		{
			head=start;
			delete(head);
		}

	}
	return 0;
}

