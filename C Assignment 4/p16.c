#include<stdio.h>
int main()
{
	long long int a[1000000] ;
	long long int t,i,n,k,x,y,j;
	scanf("%lld",&t);
	while(t--)
	{
		k=-1;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1]) 
				k=i;
		}
		if(k==-1)
			for(i=0;i<n;i++)
			{
				printf("%lld ",a[i]) ;
			}
		else
		{
			//			x=a[k];
			//			a[k]=a[k+1];
			//			a[k+1]=x ;
			for(i=k+1;i<(n);i++)
			{
				for(j=i+1;j<(n);j++)
				{
					if(a[i]>a[j])
					{
						y=a[i];
						a[i]=a[j];
						a[j]=y;
					}
				}
			}
			for(i=k+1;i<n;i++)
			{
				if(a[k]<a[i])
				{
					x=a[k];
					a[k]=a[i];
					a[i]=x;
                                        break;
				}
			}
			for(i=0;i<n-1;i++)
			{
				printf("%lld ",a[i]);
			}
printf("%lld",a[n-1]);
		}
		printf("\n");
	}
	return 0;
}


