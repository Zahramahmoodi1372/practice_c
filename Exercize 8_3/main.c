#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int size_of_array = 0;
    printf("toole list ? ");
    scanf("%d",&size_of_array);
    if(size_of_array <= 0)
        exit(0);

    char firstname[size_of_array][20],lastname[size_of_array][20], age[size_of_array][5];


    for(int i = 0; i < size_of_array; i++){
        printf("\n Name : ");
        scanf("%s",firstname[i]);
        printf("\n LastName : ");
        scanf("%s",lastname[i]);
        printf("\n age : ");
        scanf("%s",age[i]);
    }



    printf("\n****** Orginal List ******\n");
    for(int i = 0; i < size_of_array;i++){
        printf("\n%s,%s       %s",firstname[i],lastname[i],age[i]);
    }

    char temp[30];
    char temp2[30];

    for(int i=0; i<size_of_array; i++){
        for(int j=0; j<size_of_array-1-i; j++){
            if(strcmp(firstname[j], firstname[j+1]) > 0){

                strcpy(temp, firstname[j]);
                strcpy(temp2,lastname[j]);
                strcpy(firstname[j], firstname[j+1]);
                strcpy(lastname[j],lastname[j+1]);
                strcpy(firstname[j+1], temp);
                strcpy(lastname[j+1],temp2);
            }
        }
    }

    printf("\n****** Sorted List ******\n");
    for(int i = 0; i < size_of_array;i++){
        printf("\n%s,%s       %s",firstname[i],lastname[i],age[i]);
    }


    return  -1;

}
