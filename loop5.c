#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter limit:");
scanf("%d",&n);
while(i<=n)
{
printf("Cube of %d id %d\n",i,i*i*i);
i=i+1;
}
return 0;
}
