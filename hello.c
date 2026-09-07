#include <stdio.h>  

int main() {
    int start, end;
scanf("%d",&start);
scanf("%d",&end);
for(int i=start;1<=end;i++){
    if(i%3==0 && i%4==0){
printf("First number divisible by 3 and 4: %d",i);
break;
}
}
    return 0;  
}
