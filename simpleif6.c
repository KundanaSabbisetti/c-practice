//to check if eligible or not//
#include<stdio.h>
int main()
{
int a;
printf("Enter Age: ");
scanf("%d",&a);
if(a>=18)
{
printf("Eligible");
}
if(a<18)
{
printf("Not Eligible");
return 0;
}
}
