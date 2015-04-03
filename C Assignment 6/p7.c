#include<stdio.h>
int main()
{
	long long int t,count,x,j,i,n;
	//	arr[20010]={0};
	scanf("%lld",&t);
	while(t--)
	{
		// long long int arr[20010]={0};
		scanf("%lld",&n);
		long long int arr[n];
		for(i=0;i<n;i++)
			arr[i]=0;
		if(n==1)
		{
			printf("1\n");
		}
		else
		{
			arr[1]=1;
			count=0;			
			j=2;
			for(i=2;i<=n;i++)
			{
				while(1)
				{

					if(j>n-1)
						j=0;
				/*	else
						j++;*/
					if(arr[j]==0)
					{
						count++;
					}


					if(count==((i)%(n-i+1))+1)
					{
					//j++;
						count=0;
/*						while(arr[j]!=0)					j++;
						if(j>n-1)
							arr[0]=i;
						else
							arr[j]=i 
								if(j==n-1)
									j=-1;*/
                                                arr[j]=i;
						break;
					}
j++;

				}
			}


			for(i=0;i<n-1;i++)
			{
				printf("%lld ",arr[i]);
			}
			printf("%lld\n",arr[n-1]);
		}
	}

	return 0;
}	  


