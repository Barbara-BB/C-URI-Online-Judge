#include <stdio.h>
int main(){
     int codpeca1;
     int qtdpeca1;
     float valorpeca1;
     int codpeca2;
     int qtdpeca2;
     float valorpeca2;
     float TOTAL;
     scanf("%d%d%f",&codpeca1,&qtdpeca1,&valorpeca1);
     scanf("%d%d%f",&codpeca2,&qtdpeca2,&valorpeca2);
     TOTAL=qtdpeca1*valorpeca1+qtdpeca2*valorpeca2;
     printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
     return 0;
}