#include<stdio.h>
int main()
{
  int a,b,x,y,n,i,r;
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
	scanf("%d%d",&a,&b);
    x=a;
    y=b;
    if(x==0 || y==0)
    printf("0\n");
    else
   {	    
    while(y!=0)
    {
      r=x%y;
      x=y;
      y=r;
    }
      printf("%d\n",x);
   }

 
	      
  
  }
     return 0;
}



    
      	    
