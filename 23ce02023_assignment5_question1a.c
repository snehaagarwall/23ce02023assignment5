#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    if(n==0){
        count==1;
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
    }
    printf("number of digits is:%d", count);
}