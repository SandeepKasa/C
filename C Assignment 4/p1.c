#include<stdio.h>
int main()
{
	long long int t,s,n,i,m,u,p,q,c,j; 
	long long int a[1000000];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		s=1;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
             
			s=s*(a[i]);
		}
		scanf("%lld",&m);
		for(i=0;i<m;i++)
		{
			scanf("%lld",&u);
			if(a[u]!=0)
			{
				q=a[u];
				p=s/q;
				printf("%lld ",p);
			}
			else
			{
				c=1;
				for(j=0;j<n;j++)
					if (u!=j)
						c=c*a[j];		
				printf("%lld ",c);
			}
		}
		printf("\n");
	}
	return 0;
}
