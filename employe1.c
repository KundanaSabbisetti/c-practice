//program to read and display the info about employe//
#include <stdio.h>
struct employe{
char name[50];
char designation[100];
int empid;
float salary;
};
int main(){
struct employe e1;
scanf("%s",e1.name);
prprintf("Enter employe name: \n");
intf("Enter designation: \n");
scanf("%s",e1.designation);
printf("Enter Employe id: \n");
scanf("%d",&e1.empid);
printf("Enter Salary: \n");
scanf("%f",&e1.salary);
printf("Employe details");
printf("Employe Name: %s\n",e1.name);
printf("Employe Designation: %s\n",e1.designation);
printf("Employe id: %d\n",e1.empid);
printf("Employe Salary: %f\n",e1.salary);
return 0;}
