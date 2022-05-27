#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Hoursbase 7.99
#define overlay 1.99

struct internet
{
    char name[20];
    int hours;
    double price;
};

int main() {
    struct internet l;
    printf("Whats is your name ? ");
    scanf("%s",l.name);
    printf("chand saat as internet estefadeh kardid? ");
    scanf("%d",&l.hours);
    if(l.hours > 10){
        l.price = Hoursbase;
        for(int i = 10;i < l.hours;i++){
            l.price = l.price + overlay;
        }
    } else{
        l.price = Hoursbase;
    }

    printf("tamame hazineye masrafi %lf ast",l.price);

    FILE *log;

    log=fopen("internet.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    return  0;
}
