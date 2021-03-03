#include <stdio.h>
#include <math.h>
int main(){
     double R;
     double pi;
     double TOTAL;
     scanf("%lf",&R);
     pi=3.14159;
     TOTAL=(4.0/3)*pi*pow(R,3);
     printf("VOLUME = %.3lf\n",TOTAL);
     return 0;
}