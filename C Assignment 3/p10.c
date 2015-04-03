#include<stdio.h>
#include<math.h>
int main()
{
	long long int n1,n2,x=0,y=0,i,sum,p;
	while((scanf("%lld%lld",&n1,&n2))!=EOF)
	{
		x=0;
		y=0;
		for(i=31;i>=0;i--)
		{
			if(n1%2==0)
				n1=n1/2;
			else
			{
				p=pow(2,i);
				n1=n1/2;
				x=x+p;
			}
			if(n2%2==0)
				n2=n2/2;
			else
			{
				p=pow(2,i);
				n2=n2/2;
				y=y+p;
			}
		}
		sum=x+y;
		printf("%lld\n",sum);
	}
	return 0;
}
