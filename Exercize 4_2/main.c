#include<stdio.h>
#include<math.h>

int main(){

     char c;

     printf("Enter silandr content : ");
     scanf("%c",&c);

     switch (c)
     {
         case'y':
         case'Y':
         printf("Yellow gas");
         break;
         case'o':
         case'O':
         printf("Orange gas");
         break;

     default:
      printf("Contents Unknown");
         break;
     }
     return 0;
}
