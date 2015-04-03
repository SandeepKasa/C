#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,t,sum=1,i=2,b=0,p;
	scanf("%lld",&t);
while(t!=0)
{
scanf("%lld",&n);
        if(n==1)
	{
        	printf("0\n");
        	printf("No\n");
	}
	else
	{	
        	sum=1,i=2;
        	p=sqrt(n);
		while(i<=p)
		{
			if ((n%i)==0)
			{
                	b=(n/i);
			sum=sum+i+b;
			if(i==b)
			sum=sum-b;
			}
			i++;
			
		}
	printf("%lld\n",sum);
	if(sum==n)
	printf("Yes\n");
	else
	printf("No\n");
	
}
 t--;
}	
return 0;
}

