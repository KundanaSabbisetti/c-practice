//progarm to read and dispaly the info of laptops//
#include <stdio.h>
struct laptop{
char name[100];;
float price;
};
int main(){
struct laptop l1;
printf("Enter laptop Company Name: \n");
scanf("%[^\n]",l1.name);
printf("Enter the Price of laptop: \n");
scanf("%f",&l1.price);
printf("Laptop Details");
printf("Laptop name: %s\n",l1.name);
printf("Price: %f",l1.price);
return 0;}
