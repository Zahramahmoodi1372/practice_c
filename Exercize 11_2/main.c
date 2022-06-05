#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    char name[20];
    char lastname[20];
};


int main()
{

    FILE *fp1 = fopen("file1.txt", "w");
    FILE *fp2 = fopen("file2.txt", "w");

    struct data data1;
    struct data data2;
    struct data data3;

    strcpy(data1.name,"Hello");
    strcpy(data2.lastname,"World");

    fwrite(&data1,sizeof(data1),1,fp1);
    fwrite(&data2,sizeof(data2),1,fp2);



    FILE *fp3 = fopen("file3.txt", "w");
    char c;

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }


    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);


    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);

    printf("\nMerged file1.txt and file2.txt into file3.txt\n");

    fclose(fp3);

    fp3 = fopen("file3.txt", "r");

    fread(&data3,sizeof(data3),1,fp3);
    printf("name : %s   , lastName : %s",data3.name,data3.lastname);


    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
