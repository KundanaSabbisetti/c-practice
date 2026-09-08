#include<stdio.h>
int main()
{
int i,n;
printf("Enter limit:");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
printf("Square for %d is %d\n",i,i*i);
}
return 0;
}

