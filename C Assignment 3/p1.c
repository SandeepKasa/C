#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k,s1,s2,carry,l1,l2,total,start,mult;
	char num1[10000],num2[10000];
	while(1)
        {
                
		int ans[4001]={0};
		scanf("%s",num1);
		l1=strlen(num1);
		scanf("%s",num2);
		l2=strlen(num2);
                if(num1=='0' && num2=='0')
                        break;
		if(num1[0]=='-')
			s1=1;
		else
			s1=0;
		if(num2[0]=='-')
			s2=1;
		else
			s2=0;
		mult=0;
		for(i=l1-1;i>=s1;i--)
		{
			carry=0;start=4000-mult;
			for(j=l2-1;j>=s2;j--)
			{
				total=ans[start]+((num1[i]-'0')*(num2[j]-'0'))+carry;
				ans[start]=total%10;
				carry=(total-(total%10))/10;
				start--;
			}
			if(carry!=0)
			{
				ans[start]+=carry;
				start--;
			}
			mult++;
		}
		if(s1!=s2)
			printf("-");
		for(i=start+1;i<4001;i++)
		{
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
