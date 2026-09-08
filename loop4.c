#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter limit:");
scanf("%d",&n);
while(i<=n)
{
printf("Square of %d is %d\n",i,i*i);
i=i+1;
}
return 0;
}

