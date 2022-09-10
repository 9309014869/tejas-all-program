#include<stdio.h>
void sum(n);

int main()
{
int n;
scanf("%d",&n);
sum(n);
return(0);
}

void sum(n)
{
int m,n;
if(n==1)
{
return 1;
}
int l=sum(n-1);
m=l+n;
printf(" sum of n number%d",m);
}