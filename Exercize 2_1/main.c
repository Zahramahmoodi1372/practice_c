#include <stdio.h>
#define fare 1.50

int main(){
  int start,end;
  printf("Enter the begin of kilometers : ");
  scanf("%d",&start);
  printf("Enter the end of kilometers : ");
  scanf("%d",&end);

  int Area = end - start;
  int rent = Area * fare;

  printf("you traveled a distance of %d kilometers.at 1.50$ per kilometer. your fare is %d",Area,rent);

  return 0;

}
