//to generate a program and print fibinocci series
#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++){
a[i]=a[i-2]+a[i-1];
}
for(int b=0;b<n;b++){
printf("%d ",a[b]);}
return 0;}

