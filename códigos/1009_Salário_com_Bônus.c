#include <stdio.h>
int main(){
     char nome[61];
     double salario;
     double vendas;
     double TOTAL;
     scanf("%S",&nome);
     scanf("%lf",&salario);
     scanf("%lf",&vendas);
     TOTAL=salario+vendas*0.15;
     printf("TOTAL = R$ %.2lf\n",TOTAL);
     return 0;
}