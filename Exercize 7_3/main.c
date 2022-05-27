#include <stdio.h>

int main() {

    double arrayfirst[] = {-10.5, -1.8, 3.5, 6.3, 7.2};
    double arraysecound[] = {-1.8,3.1,6.3};
    int temp = 0;


    int length = sizeof(arrayfirst)/sizeof(arrayfirst[0]);
    int length2 = sizeof(arraysecound)/sizeof(arraysecound[0]);

    printf("anasore asliye avalin arayeh: \n");
    for (int i = 0; i < length; i++) {
        printf("%lf ", arrayfirst[i]);
    }

    printf("\nanasore asliye dovomin arayeh: \n");
    for (int i = 0; i < length2; i++) {
        printf("%lf ", arraysecound[i]);
    }

    // res = firstarray + secondArray
    double ResultArr[] = {-10.5, 3.5, 7.2,3.1,6.3,-1.8};

    int lengthRes = sizeof(ResultArr)/sizeof(ResultArr[0]);

    for (int i = 0; i < lengthRes; i++) {
        for (int j = i+1; j < lengthRes; j++) {
            if(ResultArr[i] > ResultArr[j]) {
                temp = ResultArr[i];
                ResultArr[i] = ResultArr[j];
                ResultArr[j] = temp;
            }
        }
    }

    printf("\nResult : \n");
    for (int i = 0; i < lengthRes; i++) {
        printf("%lf ", ResultArr[i]);
    }

    printf("\n");
    return  0;
}
