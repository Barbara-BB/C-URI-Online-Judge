#include <stdio.h>
int main(){
     int A;
     int B;
     int C;
     int maiorAB;
     int maiorAC;
     scanf("%d",&A);
     scanf("%d",&B);
     scanf("%d",&C);
     maiorAB=(A+B+abs(A-B))/2;
     maiorAC=(maiorAB+C+abs(maiorAB-C))/2;
     printf("%d eh o maior\n",maiorAC);
     return 0;
}