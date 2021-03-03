#include <stdio.h>

#include <string.h>



char cifra[];
int x;



int main ()

{

  int n, m;

  scanf("%d", &n);

  char cifra[51];
  int i;




  for (i = 0; i < n; i++)

  {

    scanf("%s", cifra);

    scanf("%d", &m);

    codif(cifra, m);

    printf("%s\n", cifra);

  }



  return 0;

}



void codif(char cifra[], int x)

{

  int l, sub;

  l = strlen(cifra);
  int j;

  for (j=0; j < l; j++)

  {

    sub = cifra[j] - x;

    if (sub < 65){

      cifra[j] = sub + 26;

    }

    else

      cifra[j] = sub;

  }

}