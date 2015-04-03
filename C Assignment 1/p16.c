#include<stdio.h>
 #include<math.h>
 int main()
{
	 int c,n,i,l,b,a,num,x,t;
	  scanf("%d",&n);
	   for(i=1;i<=n;i++)
		    {
			     scanf("%d %d",&num,&b);
			      c=0;
			       while(num!=0)
				       	{
							
						 if(num%2!=0)
							  	c=c+1;
						 	
						 	num=num/2;
								 }
			        t=0;
				 for(l=1;l<=c;l++)
					  {
						  	 x=pow(b,l-1); 
							 	 t=x+t;
								  }
				  printf("%d\n",t);

		    }
	    return 0 ;
}

