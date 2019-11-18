#include<stdio.h>

int main(void)
{
   int sum,term,i,m;
   sum=0;
   term=1;
   printf("Enter term:\n");
   scanf("%d",&term);
   for(i=1;i<=term;i++);
   {
       term=term*i;
       sum=sum+term;
   }
   printf("sum is %d\n",sum);
   return 0;
}