#include<stdio.h>
int main()
{
 int a,b,m,n;
 scanf("%d",&n);
 m=0;
 while(m<n)
 {
  scanf("%d%d",&a,&b);
  m=m+1;
  if(a==0 || b==0)
  printf("YES\n");
  else if(a%b==0 || b%a==0)
   printf("YES\n");
else
 printf("NO\n");
}
return 0;
}
  


