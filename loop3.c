#include<stdio.h>
int main()
{
int n1;
printf("Enter n1:");
scanf("%d",&n1);
int n2;
printf("Enter n2:");
scanf("%d",&n2);
while(n1<=n2)
{
printf("%d\n",n1);
n1=n1+1;
}
return 0;
}

