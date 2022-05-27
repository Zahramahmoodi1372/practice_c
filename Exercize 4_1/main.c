#include<stdio.h>
#include<math.h>

int main(){

    double markdown;
    char c[20];

      printf("Enter your markdown: ");
      scanf("%lf",&markdown);

      printf("Are you collegian ? (y/n) : ");
      scanf("%s",&c);
      if(c[0] == 'y'){

       double res = markdown / 100 * 20;
       markdown = markdown - res;
      printf("markdown : %lf" ,markdown + (markdown / 100 * 5));
      }
      else if (c[0] == 'n')
      {
      printf("markdown : %lf" ,markdown + (markdown / 100 * 5));
      }
      else{
           printf("markdown : %lf" ,markdown + (markdown / 100 * 5));
      }

}
