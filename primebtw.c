#include<stdio.h>
void main()
{
   	 int a,b,i,j,flag;
	 
   scanf("%d%d",&a,&b);
   for(i=(a+1);i<b;i++)
   {  flag=0;
      if(i==2)
         printf("%d\n",i);
      else
      {
   	  if(i!=1)
      {    
      for(j=2;j<=(i/2);j++)
      {
         if(i%j==0)
         { flag=1;
           break;
         }
       }
       if(flag==0)
         printf("%d\n",i);
      }
      }
     }
}
