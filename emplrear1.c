//program to read and dispaly info about employe using array//
#include <stdio.h>
struct employe{
char name[50];
int empid;
float salary;
char designation[100];
};
int main(){
int n;
printf("Enter how many employe: ");
scanf("%d",&n);
struct employe e[n];
for(int i=0;i<n;i++){
printf("Enter Employe Name: \n");
scanf("%[^\n]",e[i].name);
printf("Enter Employe Id: \n");
scanf("%d",&e[i].empid);
printf("Enetr Salary: \n");
scanf("%f",e[i].salary);
printf("Enter designation: \n");
scanf("%[^\n]",e[i].designation);}
for(int i=0;i<n;i++){
printf("Employe Name: %s",e[i].name);
printf("Employe id: %d",e[i].empid);
printf("Employe salary: %f",e[i].salary);
printf("Employe Designation: %s",e[i].designation);}
return 0;}
