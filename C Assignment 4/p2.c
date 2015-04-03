#include<stdio.h>
int main()
{
 long long int a[100000];
 long long int i,k,l,t,out,max=0,n; 
 scanf("%lld",&t);
 while(t--)
 {
  max=-1;
  scanf("%lld",&n);
  for(i=0;i<n;i++)
  {
   scanf("%lld",&a[i]);
   if(a[i]>max)
   max=a[i];
 }
  for(i=0;i<n;i++)
  {
    for(k=i;k<n;k++)
   {
     out=0;
     for(l=i;l<=k;l++)
    {
      out=out^a[l];
    }
     if(out>max)
     max=out;
   }
  }
   printf("%lld\n",max);
 }
  return 0;
}

   
