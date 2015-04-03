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
		/*for(i=0;i<n1;i++)
		{
			c[i]=a[i];
		}*/
		for(j=0;j<=(n1-n2);j++)
		{
			count=0;
			if(a[j]==b[0]||a[j]=='?')
			{
				count++;
				for(k=1;k<n2;k++)
				{
					if(a[j+k]==b[k]||a[k+j]=='?')
						count=count++;
			//		printf("%d",count);
				}
			}
			if(count==n2)
			{
				for(l=0;l<n2;l++)
				{
					a[j+l]=b[l];
				}
			}
		}
		for(l=0;l<n1;l++)
			if(a[l]=='?')
				a[l]='*';

		for(l=0;l<n1;l++)
		{
			
				printf("%c",a[l]);
		}
//		printf("%c",c[l]);
		printf("\n");
		t--;
	}
		return 0;
	}
	
