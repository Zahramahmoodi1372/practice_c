#include <stdio.h>
#include <math.h>
#include <stdbool.h>

char Radix(const int , int);
bool started;
int num;

int main() {
    while (1){
        num = 0;
        printf("Please Enter a number : ");
        scanf("%d" ,&num);

        char result[13];
        int k = 12;
        started = false;
        while (k >= 0){
            result[k] = Radix(2,k);
            k--;
        }
        printf("number based (10 => 2) : ");
        for(int i = 12 ; i >= 0;i--){
            printf("%c",result[i]);
        }
        printf("\n");
        getchar();
        getchar();
    }
}

char Radix(const int x, int k){
     int res = pow(x,k);
    if(num >= res) {
         num = num - res;
        if(started == false){
            started = true;
        }
         return '1';
     }
     else{
         if(started == true){
             return '0';
         } else{
             return '\0';
         }
     }
}
