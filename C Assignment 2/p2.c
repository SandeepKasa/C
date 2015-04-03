#include <stdio.h>
#include<math.h>
int main()
{
 long long int num,j,a,k=0;
 scanf("%lld",&num);
 if((num%2)!=0)
{
 j=3;
 a=sqrt(num);
 k=0;
 while(j<=a)
{
 if((num%j)==0)
{
 if((num%(j*j))!=0 && ((num-1)%(j-1))==0)
 k=k+1;
 else
 k=k;
}
j=j+2;
}
 if(k>=3)
 printf("Yes\n");
 else
 printf("No\n");
}
 else
 printf("No\n");
 return 0; 
}

