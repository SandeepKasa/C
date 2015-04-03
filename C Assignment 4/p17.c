#include<stdio.h>
int main()
{
	long long int a[10],b[10];
        long long int c[1000000];
	long long int n,min,t,i,j,pos,d,w,k,q;
		scanf("%lld",&n);
		for(i=0;i<9;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
		}
                for(i=0;i<9;i++)
		{
			for(j=i+1;j<9;j++)
			{
			if(a[i]>a[j])
			{
			  t=a[i];
			  a[i]=a[j];
			  a[j]=t;
			}
			}
		}
		min=a[0];
		for(i=8;i>=0;i--)
		{
			if(min==b[i])
			{
				pos=i+1;
			        break;
			}
		}
		d=n/min;
		if(n==d*min)
		{
			for(i=0;i<d;i++)
				printf("%lld",pos);
		}
		else
		{
		//	printf("yes1\n");
			for(i=0;i<d-1;i++)
				(c[i]=pos);
		        for(i=8;i>=0;i--)
			{
				if(a[i]<=(n-((d-1)*min)))
				{
		//			printf("yes2\n");
					k=a[i];
			               break;
				}
			}
			  		for(i=8;i>=0;i--)
					{
						if(k==b[i])
						{
		//					printf("yes\n");
							w=i+1;
                                                        c[d-1]=w;
                                                        break;
						}
					}
                             for(i=0;i<d;i++)
                            {
                             for(j=i+1;j<d;j++)
                             {
                              if(c[i]<c[j])
                              {
                                  q=c[i];
                                  c[i]=c[j];
                                  c[j]=q;
                             }
                           }
                        }
			   for(i=0;i<d;i++)
                       {
                            printf("%lld",c[i]);
                       }
		}
		printf("\n");
		return 0;
}
