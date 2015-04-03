#include<stdio.h>
int main()
{
 long long int i,j,t,N,x,a,b;
 long long int arr[500];
 long long int s[500];
 scanf("%lld",&t);
 while(t!=0)
 {
  scanf("%lld",&N);
  x=1;
  for(i=0;i<N;i++)
  scanf("%lld",&arr[i]);
  x=1;
  s[0]=1;
  for(i=1;i<N;i++)
  {
    a=0;
    b=i;
    j=0;
    for(b=i;b>=0;b--)
 {
   if(arr[i]>arr[b])
   {
     if(a<s[b])
          a=s[b];
        j++;
    }
    if(j==0)
       s[i]=1;
    }
     s[i]=a+1;
      if(x<s[i])
      x=s[i];
  }
    printf("%lld\n",x);
   t--;
}
return 0;
}
  
