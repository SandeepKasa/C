#include<stdio.h>
int main()
{
	char a[8][8];
	long long int t,i,j,flag;
	scanf("%lld",&t);
	while(t--)
	{
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{ 
				scanf("%c",&a[i][j]);
			}
			getchar();
		}
		flag=0;
		for(i=0;i<8;i++)
		{
			for(j=1;j<8;j++)
			{
				if(a[i][j]==a[i][j-1])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
		getchar();
	}
	return 0;
}
 
		
