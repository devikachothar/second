#include<stdio.h>
void main()
{
    int n,i,r=1;
    scanf("%d",&n);
    if(n==0)
      printf("1");
    else
    {
       for(i=n;i>1;i--)
       {  r*=i;  }
       printf("%d",r);
    }
    
}
