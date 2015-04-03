#include<stdio.h>
#include<math.h>
int main()
{
	int T,m=0,n,i,c=0,p;
        scanf("%d",&T);
	while(m<T)
	{
		m=m+1;
		scanf("%d",&n);
		if(n==1)
			printf("FALSE\n");
		else if(n==2 || n==3 || n==5 || n==7) 
			printf("TRUE\n");
		else if(n%2==0)
			printf("FALSE\n");
		else if(n>=9)
		{
			p=sqrt(n);
		for(i=3;i<=p;i=i+2)
		{
			if(n%i==0)
			{
			       	printf("FALSE\n");
				 break;
			}
		}
		if(i>p)
			printf("TRUE\n");
	}
	}
		return 0;
	}
