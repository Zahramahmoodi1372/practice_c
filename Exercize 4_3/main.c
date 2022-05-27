#include<stdio.h>
#include<math.h>

int main(){

     float n;

     printf("ISP N : ");
     scanf("%f",&n);

     if(n > 0 && n <= 1){
         printf("Charge 250");
     }
     else if (n > 1 && n <= 2)
     {
         printf("Charge 500");
     }
     else if (n > 2 && n <= 5)
     {
         printf("Charge 1000");
     }
     else if (n > 5 && n <= 10)
     {
       printf("Charge 1500");
     }
     else if (n > 10)
     {
           printf("Charge 2000");
     }
     else {
          printf("n value is not valid");
     }
     return 0;
}
