#include<stdio.h>
#include<string.h>
 int main()
 {
         int t;
         char str1[1000],str2[1000],a;
         int x,y,k,i,j;
         scanf("%d",&t);
         while(t!=0)
         {
		 k=0;
                 scanf("%s%s",str1,str2);
                 x=strlen(str1);
                 y=strlen(str2);
                 if(x==y)
 {
                         if(strcmp(str1,str2)==0)
                         k=1;
                         else
                         {
                                 k=0;
				 for(i=0;i<=(x-1);i++)
				 {
                                         a=str1[0];
                                         for(j=0;j<=(x-1);j++)
                                         {
                                                 str1[j]=str1[j+1];
                                         }
                                         str1[x-1]=a;
                                         if(strcmp(str1,str2)==0)
                                         k=k+1;
                                 }
 
                         }
 
                 }
                 if(k==1)
                 printf("YES\n");
                 else
                 printf("NO\n");
                 t--;
         }
 
         return 0;
 }
                                                                 

