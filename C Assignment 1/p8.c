#include<stdio.h>
int main()
{
	 int a,b,x,y,n,r,z,m;
	  scanf("%d",&n);
	   m=0;
	    while(m<n)
		     {
			      m=m+1;
			       scanf("%d%d",&a,&b);
			        x=a;
				 y=b;
				  while(y!=0)
					   {
						     r=x%y;
						       x=y;
						         y=r;
							   }
				    z=(a*b)/x;
				      printf("%d\n",z);
				        }
	      return 0;
	        }

