#include<stdio.h>
#inlclude<math.h>
void main()
{
    int n,n1,rem,n2=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {  rem=n%10;
       n2=(n2*10)+rem;
       n/=10;
    }   
    if(n1==n2)
      printf("Palindrome");
    else
    printf("not palindrome");
}
