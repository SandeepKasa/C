#include<stdio.h>
#include<string.h>
int main()
{
	int n1,n2,i,j,k,l,count=0,t;
	char a[10000],b[10000],c[10000];
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%s%s",a,b);
		n1=strlen(a);
		n2=strlen(b);
		for(i=0;i<n1;i++)
		{
			c[i]=a[i];
		}
		for(j=0;j<=(n1-n2);j++)
		{
			count=0;
			if(a[j]==b[0])
			{
				count++;
				for(k=1;k<n2;k++)
				{
					if(a[j+k]==b[k])
						count=count++;
			//		printf("%d",count);
				}
			}
			if(count==n2)
			{
				for(l=0;l<n2;l++)
				{
					c[j+l]=0;
				}
			}
		}
		for(l=0;l<n1;l++)
		{
			if(c[l]!=0)
				printf("%c",c[l]);
		}
//		printf("%c",c[l]);
		printf("\n");
		t--;
	}
		return 0;
	}
	
