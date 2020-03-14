#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<gsl/gsl_ieee_utils.h>

int main(){

    float a = 1.1;
    float d=2.0;
    for (int i=0; i<149; i++){
      a=a/d;
      printf("a ="); gsl_ieee_printf_float(&a);
      if(isnormal(a))
            printf(" normalized" );
      else printf(" denormalized");
      printf("\n");

      }
  return 0;
}
