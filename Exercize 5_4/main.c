#include <stdio.h>

#define V 1000
#define A 3
#define T 1


int main() {
    int Audio_File =0;
    int storage =0;
    int text_File =0;
    int video_File =0;



    printf(" phone storage (MG) : \n");
    scanf("%d",&storage);

    printf("\nHow many video_File do you have ? \n");
    scanf("%d",&video_File);

    printf("\nHow many text_File do you have ? \n");
    scanf("%d",&text_File);

    printf("\nHow many Audio_File do you have ? \n");
    scanf("%d",&Audio_File);

    int VStorage , AStorage , TStorage;
    VStorage = V * video_File;
    AStorage = A * Audio_File;
    TStorage = T * text_File;

    storage = storage - (VStorage + AStorage + TStorage);
    printf("mizane hagme masraf shodeh: %d MG",(VStorage + AStorage + TStorage));
    printf("\n now storage : %d MG",storage);

    return 0;
}
