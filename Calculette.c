#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resultat = 0;
  int chiffre0 = 0;
  int chiffre1 = 0;

  //On demande à l'utilisateur de rentrer les chiffres 1 et 2

  printf("Ecrivez une chiffre\n");
  scanf("%d",&chiffre0);
  printf("Ecrivez un second chiffre\n");
  scanf("%d",&chiffre1);

  resultat = chiffre0 + chiffre1;
  printf("%d + %d = %d", chiffre0, chiffre1, resultat);

  return 0;
