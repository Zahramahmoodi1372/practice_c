#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int PlayRockPaperScissors();

int yellowScore = 0;
int redScore = 0;
int cycle = 0;
int main() {

    printf("Hi , we have 2 players here yellow and Red\n");
    getchar();

    int ib = PlayRockPaperScissors();
    while(ib == -1){
        printf("\n\ncontinue (cycle : %d) : \n",cycle);
        getchar();
        ib = PlayRockPaperScissors();
    }
    printf("yellow Score : %d\nred Score : %d",yellowScore,redScore);
    getchar();
    return 0;
}

int PlayRockPaperScissors(){

    char Choices[20];
    char yellow[20];
    char red[20];
    printf("s that means scissors , p means paper , r means rock : press Enter for continue\n");
    getchar();
    printf("yellow you are in :(s,p,r) : \n");
    scanf("%s",Choices);
    while (Choices[0] != 's' && Choices[0] != 'p' && Choices[0] != 'r' && Choices[1] != '\0'){
        scanf("%s",Choices);
    }
    strcpy(yellow,Choices);
    printf("now red you are in :(s,p,r) : \n");
    scanf("%s",Choices);
    while (Choices[0] != 's' && Choices[0] != 'p' && Choices[0] != 'r' && Choices[1] != '\0'){
        scanf("%s",Choices);
    }
    strcpy(red,Choices);
    printf("yellow : %s\nred : %s\n",yellow,red);
    getchar();
    int bs,rs = 0;

    if(strcmp(yellow,"s")==0 && strcmp(red,"s")==0){
        return -1;
    }
    else if(strcmp(yellow,"s")==0 && strcmp(red,"p")==0){
        bs++;
    }
    else if(strcmp(yellow,"s")==0 && strcmp(red,"r")==0){
        rs++;
    }
    else if(strcmp(yellow,"p")==0 && strcmp(red,"s")==0){
        rs++;
    }
    else if(strcmp(yellow,"p")==0 && strcmp(red,"p")==0){
        return -1;
    }
    else if(strcmp(yellow,"p")==0 && strcmp(red,"r")==0){
        bs++;
    }
    else if(strcmp(yellow,"r")==0 && strcmp(red,"s")==0){
        bs++;
    }
    else if(strcmp(yellow,"r")==0 && strcmp(red,"p")==0){
        rs++;
    }
    else if(strcmp(yellow,"r")==0 && strcmp(red,"r")==0){
        return -1;
    }
    int option = 0;

    if(cycle >= 2){
        if(bs > rs)
            yellowScore++;
        else
            redScore++;

        return 1;
    }

    if(cycle > 0){
        if(bs > rs)
            yellowScore++;
        else
            redScore++;

        cycle++;
        return -1;
    }

    if(bs > rs){
        yellowScore++;
            printf("\nyellow you winer do you want leave(press 0) . continue(press 1) :  \n");
            scanf("%d",&option);
            if(option == 0)
                return 0;
            else{
                cycle++;
                return -1;
            }

    }
    else if(bs < rs)
    {
        redScore++;
            printf("\nRed you winer do you want leave(press 0) . continue(press 1) :  \n");
            scanf("%d",&option);
            if(option == 0)
                return 0;
            else{
                cycle++;
                return -1;
            }
    }
}

