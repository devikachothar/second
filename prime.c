#include<stdio.h>
void main()
{
  int n,j=0,flag=0;
  scanf("%d",&n);
  if(n<=1)
    printf("Neither prime nor not prime");
  j=n/2;
  for(int i=2;i<=j;i++)
  {
     if((n%i)==0)
     {  flag=1;
        break;
     }
   }
   if(flag==0)
   printf("Prime");
   else
    printf("Not prime");
}
