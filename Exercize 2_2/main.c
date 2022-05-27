#include <stdio.h>
#include <math.h>
#define fare 1.50

int main(){
    float temperature;
    float Timehaspassed;

    printf("zamane separi shodeh (Input : Second) : ");
    scanf("%f",&Timehaspassed);
    printf("zamane karkarde frezer  : %f\n",Timehaspassed / 60);

    temperature = (float)4 * pow(Timehaspassed / 60,2) / Timehaspassed + 2 -20;

    printf("damaye frizer %fC°",temperature);

    return 0;
}
