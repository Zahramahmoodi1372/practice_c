#include<stdio.h>
#include<math.h>
#define People 40000
#define Per 28


// Exercise3-Practice3//flu
int main(){
      // 0:1 , 1:1.6384 , 2:2.097152 , 3:2.68435456 , 4:3.4359738368
      int n;
      printf("How many time do you want program run ? ");
      scanf("%d",&n);
      while (n > 0)
      {
      n--;
      int day = 0; // day
      int patients = 1; //bimaran :  roz 0 fgt 1 nafar
      float patientsPerc = patients;
      float index = 0;

      printf("Day X : ");
      scanf("%d",&day);
      for (int i = 0; i < day; i++)
      {
          index = (float)(patientsPerc / 100) * Per;
          patientsPerc = patientsPerc + index;
      }
       patients = (int)patientsPerc;
       if(patients >= People) patients = People;
       printf("Number of patients on the %dth day : %d\n",day,patients);
      }
      return 0;
}

