#include <stdio.h>
int main()
{
    long long int n,x,ch,i=0,count=0,t;
    int a[100];
    scanf("%lld",&t);
    while(t!=0)
    {
    scanf("%lld%lld",&n,&x);
    while(ch!=-1)
    {
    scanf("%lld",&ch);
    a[i++]=ch;
    }
    for(i=0;a[i]!=-1;i++)
    {
        if(count>=n)
        {
            count--;
             if(count==n)
             {
                 count-=n;
             }
             if(a[i]+x>90 && a[i]+x<97)
                printf("%c",64+(a[i]+x-90));
                else if(a[i]+x>122)
                 printf("%c",96+(a[i]+(x-122)));
             else
           printf("%c",a[i]+x);
        }
        else
        {
            if(a[i]-x<65)
                printf("%c",91-(65-(a[i]-x)));
            else if(a[i]-x<97 && a[i]-x>90)
            {
                    printf("%c",123-(97-(a[i]-x)));
            }
            else
                printf("%c",a[i]-x);
                  count++;
         if(count==n)
            count+=n;
        }
    }
    t--;
    }
    return 0;
}
