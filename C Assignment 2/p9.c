#include <stdio.h>
int main()
{
    long long int i,n,k,j,t;
    int a[100];
    scanf("%lld",&t);
    while(t!=0)
    {
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        t--;
    }
    return 0;
}
