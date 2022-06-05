#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NumberOfEmployees 20

struct person {
    char name[20];
    char lastname[20];
    char city[20];
    char phoneNumber[20];
    int age;
    int nationalCode;
    int salary;
};

struct city{
    struct person CompanyEmployess[NumberOfEmployees];
};

typedef struct {
    struct city cityEmploye[10];
}IronCompany;

void Driver();
void Print_Empolyes(IronCompany _IronCompany);

int main() {
  Driver();
  return 0;
}

void Driver(){
   IronCompany _IronCompany;

    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].name, "mahdi");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].lastname, "moradi");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].city, "rasht");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[0].phoneNumber, "09121111111");
    _IronCompany.cityEmploye[0].CompanyEmployess[0].age = 20;
    _IronCompany.cityEmploye[0].CompanyEmployess[0].nationalCode = 48900000;
    _IronCompany.cityEmploye[0].CompanyEmployess[0].salary = 10000000;

    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].name, "maral");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].lastname, "mahmoodi");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].city, "rasht");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[1].phoneNumber, "0912333333");
    _IronCompany.cityEmploye[0].CompanyEmployess[1].age = 26;
    _IronCompany.cityEmploye[0].CompanyEmployess[1].nationalCode = 4890158746;
    _IronCompany.cityEmploye[0].CompanyEmployess[1].salary = 8000000;

    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].name, "reza");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].lastname, "rezayi");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].city, "rasht");
    strcpy(_IronCompany.cityEmploye[0].CompanyEmployess[2].phoneNumber, "09125689313");
    _IronCompany.cityEmploye[0].CompanyEmployess[2].age = 23;
    _IronCompany.cityEmploye[0].CompanyEmployess[2].nationalCode = 42658721;
    _IronCompany.cityEmploye[0].CompanyEmployess[2].salary = 10000000;


    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].name, "banafsh");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].lastname, "nasiri");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].city, "talesh");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[0].phoneNumber, "0912568975");
    _IronCompany.cityEmploye[1].CompanyEmployess[0].age = 29;
    _IronCompany.cityEmploye[1].CompanyEmployess[0].nationalCode = 3598002560;
    _IronCompany.cityEmploye[1].CompanyEmployess[0].salary = 15000000;

    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].name, "zard");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].lastname, "mohamadi");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].city, "Talesh");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[1].phoneNumber, "093658479");
    _IronCompany.cityEmploye[1].CompanyEmployess[1].age = 35;
    _IronCompany.cityEmploye[1].CompanyEmployess[1].nationalCode = 489123546;
    _IronCompany.cityEmploye[1].CompanyEmployess[1].salary = 25000000;

    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].name, "ghermez");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].lastname, "asayesh");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].city, "Talesh");
    strcpy(_IronCompany.cityEmploye[1].CompanyEmployess[2].phoneNumber, "0990259876");
    _IronCompany.cityEmploye[1].CompanyEmployess[2].age = 42;
    _IronCompany.cityEmploye[1].CompanyEmployess[2].nationalCode = 32458796;
    _IronCompany.cityEmploye[1].CompanyEmployess[2].salary = 20000000;

    Print_Empolyes(_IronCompany);
}

void Print_Empolyes(IronCompany _IronCompany){
    for(int i = 0; i < strlen(_IronCompany.cityEmploye);i++){
        printf("-----------%s-----------",_IronCompany.cityEmploye[i].CompanyEmployess[i].city);
        for (int j = 0; j < strlen(_IronCompany.cityEmploye[i].CompanyEmployess);j++) {
            printf("\n");
            printf("---Employe %d---\n",j);
            printf("name : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].name);
            printf("lastName : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].lastname);
            printf("city : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].city);
            printf("phoneNumber : %s\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].phoneNumber);
            printf("age : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].age);
            printf("nationCode : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].nationalCode);
            printf("salary : %d\n",_IronCompany.cityEmploye[i].CompanyEmployess[j].salary);
            printf("\n");
        }
    }
}



