#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter the dividend, divisor");
    scanf("%d %d",&a,&b);
    while(a>=b)
    {
        a=a-b;
        count++;
    }
    printf("Remainder: %d \n",a);
    printf("Quotient: %d \n ",count);
  return 0;
    }