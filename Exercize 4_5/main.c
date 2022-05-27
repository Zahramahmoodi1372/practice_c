#include<stdio.h>
#include<math.h>
#define PI 3.14


int main(){
     int number;
     char ch[5];

     printf("number : ");
     scanf("%d",&number);

     printf("character : ");
     scanf("%s",&ch[0]);

     if(number == 1 && ch[0] == 'm'){
         float side;
         printf("square side : (environment : Side * 4) ");
     scanf("%f",&side);
     float environment = side * 4;
     printf("environment : %f" , environment);

     }
     else if (number == 1 && ch[0] == 'n')
     {
            float side;
         printf("square side : (Area : Side * Side) ");
     scanf("%f",&side);
     float Area = side * side;
     printf("Area : %f" , Area);

     }
     else if (number == 2 && ch[0] == 'm')
     {
            float width;
            float heigth;
         printf("Rectangle width / heigth : (environment : width + heigth * 2) ");
     scanf("%f",&width);
     scanf("%f",&heigth);
     float environment = width * heigth * 2;
     printf("environment : %f" , environment);

     }
       else if (number == 2 && ch[0] == 'n')
     {
            float width;
            float heigth;
          printf("Rectangle width / heigth : (Area : width * heigth) ");
     scanf("%f",&width);
     scanf("%f",&heigth);
     float Area = width * heigth;
     printf("Area : %f" , Area);

     }
     else if (number == 3 && ch[0] == 'm')
     {
            float Diameter;
         printf("Circle Diameter : (environment : Diameter * PI) ");
     scanf("%f",&Diameter);
     float environment = Diameter * PI;
     printf("environment : %f" , environment);

     }
       else if (number == 3 && ch[0] == 'n')
     {
            float Raduis;
          printf("Circle Raduis : (Area : Raduis * Raduis * PI) ");
     scanf("%f",&Raduis);
     float Area = pow(Raduis,2) * PI;
     printf("Area : %f" , Area);
     }

     return 0;
}
