#include<stdio.h>
#include<math.h>

int main(){

    double carprice;
    double pishghest;
    double karmozd;
    int aghsat;

    printf("please Enter the car price : ");
    scanf("%lf",&carprice);

    printf("please Enter the pishghest : ");
    scanf("%lf",&pishghest);

    printf("please Enter the karmozd (mahyane) : ");
    scanf("%lf",&karmozd);

    printf("please Enter the aghsat (36/48/60) : ");
    scanf("%d",&aghsat);
    while (aghsat != 36 && aghsat != 48 && aghsat != 60)
    {
    printf("please Enter the aghsat (36/48/60) : ");
    scanf("%d",&aghsat);
    }

    double payment = carprice + karmozd * aghsat - pishghest;
    printf("geymat machin ba aghsat : %lf\n",payment);
    printf("aghsat mahyane : %lf" , payment / aghsat);

    return 0;
}
