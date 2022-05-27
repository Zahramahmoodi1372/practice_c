#include <stdio.h>
#include <stdlib.h>

#define TELEPHONEDAKHELI 150
#define TELEPHONEKHAREJI 4000
#define INTERNETDAKHELI 800
#define INTERNETKHAREJI 1300

int main() {
    int phonenum = 0;
    int Receipt = 0;

    printf(" Enter your phone number : \n");
    scanf("%d",&phonenum);

    int mokalmatyekrozd = rand();
    mokalmatyekrozd = mokalmatyekrozd * 30; // minutes

    int mokalmatyekrozk = rand();
    mokalmatyekrozk = mokalmatyekrozk * 30; // minutes

    int internetyekrozd = rand();
    internetyekrozd = internetyekrozd * 30; // minutes

    int internetyekrozk = rand();
    internetyekrozd = internetyekrozd * 30; // minutes



    mokalmatyekrozd = TELEPHONEDAKHELI * mokalmatyekrozd;
    mokalmatyekrozk = TELEPHONEKHAREJI * mokalmatyekrozk;
    internetyekrozd = INTERNETDAKHELI * internetyekrozd;
    internetyekrozd = INTERNETKHAREJI * internetyekrozd;

    Receipt = mokalmatyekrozd + mokalmatyekrozk + internetyekrozd + internetyekrozd;

    printf("Receipt : %d (riyals)" , Receipt);
    return 0;
}
